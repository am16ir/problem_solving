#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;

int main()

{
    fast  
    int t;
    cin>>t;
    while (t--){
        int n,sum=0,sq=0;
        cin>>n;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
        }
        sq=sqrt(sum);
        cout<<sq;        
    }
    return 0;
}


