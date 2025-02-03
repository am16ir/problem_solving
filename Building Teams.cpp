
/*  https://cses.fi/problemset/task/1668
    solved using DFS and definition of bipartite graph 
    https://www.geeksforgeeks.org/what-is-bipartite-graph/
*/

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;

vector<vector<int>>adj;
vector<bool>vis;
vector<int>teams;
bool ck;
void dfs (int v,bool color) {
    vis[v]=true;
    teams[v]= color;
    for (int u:adj[v]) {
        if (!vis[u])
            dfs(u,!color);
        else {
            if (teams[u]==teams[v]) {
                ck=true;
            }
        }
    }
}

int main() {
    fast
    int n,m;
    cin>>n>>m;
    adj.resize(n+1);
    teams.resize(n+1);
    vis.resize(n+1);
    for (int i=1;i<=m;i++) {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i=1;i<=n;i++) {
        if (!vis[i])
            dfs(i,false);
    }
    if (!ck) {
        for (int i=1;i<=n;i++) {
            cout<<++teams[i]<<" ";
        }
    }
    else
        cout<<"IMPOSSIBLE";
    return 0;
}