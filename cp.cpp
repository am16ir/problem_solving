#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;


int main()

{
    fast
    int n;
    cin>>n;
    deque<int>dq;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        dq.push_back(x);
    }
    int sere=0,dima=0;
    bool turn=0;
    for (int i=0;i<n;i++)
    {
        if (dq.front()>dq.back())
        {
            if (!turn)
            {
                sere+=dq.front();
                turn=1;
            }
            else 
            {
                dima+=dq.front();
                turn=0;
            }
            dq.pop_front();
        }
        else 
        {
            if (!turn)
            {
                sere+=dq.back();
                turn=1;
            }
            else 
            {
                dima+=dq.back();
                turn=0;
            }
            dq.pop_back();
        }
    }
    cout<<sere<<" "<<dima;
    
    return 0;
}


