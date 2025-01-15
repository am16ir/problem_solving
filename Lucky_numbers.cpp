#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;

int main() {
    fast
    string s;
    cin>>s;
    ll num=stoll(s);
    ll mini=1e12;
    for (int len=1;len<12;len++){
        for (int msk=0;msk<(1<<len);msk++){
            string curr="";
            int _4=0,_7=0;
            for (int i=0;i<len;i++){
                if (msk & (1<<i)) {
                    curr+='4';
                    _4++;
                }  
                else{
                    curr+='7';
                    _7++;
                }   
            }
            if (_4==_7 && stoll(curr)>= num)    mini=min(mini,stoll(curr));
        }
    }
    cout<<mini;
    return 0;
}

