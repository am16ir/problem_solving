#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;

int dx[8]={0,0,1,-1,1,-1,1,-1};
int dy[8]={1,-1,0,0,1,1,-1,-1};
int n;

bool valid (int x,int y,vector<vector<int>>&grid,vector<vector<bool>>&vis){
    return x>=0 && x<n && y>=0 && y<n && !vis[x][y] && grid[x][y]==1;
}

void dfs (int x,int y,vector<vector<int>>&grid,vector<vector<bool>>&vis){
    vis[x][y]=1;
    for (int i=0;i<8;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(valid(nx,ny,grid,vis)){
            dfs (nx,ny,grid,vis);
        }
    }
}

int main() {
    fast
    int tc=1;
    while (cin>>n){
        vector<vector<int>>grid(n,vector<int>(n));
        vector<vector<bool>>vis(n,vector<bool>(n,0));
        int cnt=0;
        for (int i=0;i<n;i++){
            string s;
            cin>>s;
            for (int j=0;j<n;j++){
                grid[i][j]=s[j]-'0';
            }
        }
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if (grid[i][j]==1 && !vis[i][j]){
                    dfs (i,j,grid,vis);
                    cnt++;
                }
            }
        }
        cout<<"Image number "<<tc<<" contains "<<cnt<<" war eagles.\n";
        tc++;
    }
    return 0;
}
