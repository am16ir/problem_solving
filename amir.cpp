#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;

bool vis[5];
vector<vector<int>>adj(5);

bool adj_mat[5][5];

void dfs(int node){
    vis[node]=1;
    for (int i=0;i<adj[node].size();i++){
        int child = adj[node][i];
        if (!vis[i]){
            dfs(i);
            cout<<i<<" ";
        }
    }
}

void dfs1(int node){
    vis[node]=1;
    for (int i=0;i<5;i++){
        if (adj_mat[node][i]==1 && !vis[i]){
            dfs1(i);
            cout<<i<<" ";
        }
    }
}

int main() {
    fast
    int v=5;
    
    vector<vector<int>>edges={{1,2},{1,0},{0,2},{2,3},{2,4}};
    for (auto it : edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
        adj_mat[it[0]][it[1]]=1;
        adj_mat[it[1]][it[0]]=1;
    }
    /*for (auto it:adj){
        for (auto k:it){
            cout<<k<<' ';
        }
        cout<<"\n";
    }*/
    //dfs(0);
    dfs1(0);
   /* for (int i=0;i<v;i++){
        for (int j=0;j<v;j++){
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    return 0;
}

