#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;



int main() {
    fast
    int n;
    cin>>n;
    int rem=n%7,num=n/7;
    string Egg="ROYGBIV";
    string temp="GBIVGBI";
    string curr="";
    for (int i=0;i<num;i++)curr+=Egg;
    for (int i=0;i<rem;i++)curr+=temp[i];
    
    cout<<curr;

    return 0;
}

