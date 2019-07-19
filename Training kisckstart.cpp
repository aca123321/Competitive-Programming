#include<bits/stdc++.h>
using namespace std;

#define lli int
#define pb push_back
#define pf pop_front

int main()
{
    lli n,i,t,p,*arr,diff,mini,adj,j;

    cin>>t;
    deque<lli> d;
    lli ans[t];

    for(j = 0;j<t;j++)
    {
        d.clear();
        cin>>n>>p;
        arr = new lli[n];
        diff =  0;
        adj = 0;
        mini = INT_MAX;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        for(i=n-1;i>=0;i--)
        {
            if(d.size()>=p)
            {
                if(d.size() == p)
                {
                    mini = min(diff,mini);
                    d.pb(arr[i]);
                    adj = d.front();
                    d.pf();
                    adj -= d.front();
                    diff -= adj*(p-1);
                    diff += d.front() - d.back();
                    mini = min(diff,mini);
                }
            }

            else
            {
                d.pb(arr[i]);
                diff += d.front() - arr[i];
                if(d.size() == p)
                {
                    mini = min(diff,mini);
                }
            }
        }

        ans[j] = mini;
    }

    for(j=0;j<t;j++)
    {
        cout<<"Case #"<<j+1<<": "<<ans[j];
        if(j!=(t-1))
        {
            cout<<endl;
        }
    }
}
