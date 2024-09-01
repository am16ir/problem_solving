#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;


int main()

{
    fast   
    map<int,int>mp;
    for (int i=1;i<=4;i++)
    {
        int x;
        cin>>x;
        mp.insert({i,x});
    }
    string s;
    cin>>s;
    int cal=0;
    for (int i=0;i<s.size();i++)
    {
       // cout<<mp[s[i]]<<" ";
        s[i]-=48;
        cal+=mp[s[i]];
    }
    cout<<cal;
    return 0;
}


