#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;

bool valid (ll v,ll n,int k) {
    ll pw=1,sum=0;
    while (v/pw > 0) {
        sum+=v/pw;
        if (sum>=n)
            return true;
        pw*=k;
    }
    return sum >= n;
}

int main() {
    fast  
    ll n,k;
    cin>>n>>k;
    ll l=1,r=n,mid,ans;
    while (l<=r){
        mid=(l+r)/2;
        if (valid(mid,n,k)){
            ans=mid;
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    cout<<ans;
    return 0;
}

