#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;

bool custom(pair<char,int>& a,pair<char,int>& b){
    return a.second<b.second;
}

int main() {
    fast
    map<char,int>mp;
    mp.emplace('A',0);
    mp.emplace('B',0);
    mp.emplace('C',0);
    int t=3;
    while (t--){
        string s;
        cin>>s;
        if (s[1]=='>')mp[s[0]]++;
        else mp[s[2]]++;
    }
    if (mp['A']==1&&mp['B']==1){
        cout<<"Impossible";
        return 0;
    }
    vector<pair<char,int>>v(mp.begin(),mp.end());
    sort(v.begin(),v.end(),custom);
    for (auto it :v)cout<<it.first;
    return 0;
}
