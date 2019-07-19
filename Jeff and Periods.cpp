#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define s second
#define f first

main()
{
    lli n,i,a,b,count=0;
    cin>>n;
    lli arr[n];
    map<lli, vector<lli>> m;
    lli ans[100002];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]].pb(i);
    }

    for(i=0;i<100002;i++)
    {
        ans[i] = -1;
    }

    for(auto it: m)
    {
        if((it.s).size() == 1)
        {
            count++;
            ans[it.f] = 0;
        }

        else if((it.s).size() == 2)
        {
            count++;
            ans[it.f] = (m[it.f][1] - m[it.f][0]);
        }

        else
        {
            lli diff;
            lli flag = 0;
            diff = (m[it.f][1] - m[it.f][0]);

            for(i=2;i<(it.s).size();i++)
            {
                if( (m[it.f][i] - m[it.f][i-1]) != diff )
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                count++;
                ans[it.f] = diff;
            }
        }
    }

    cout<<count<<endl;
    for(i=0;i<100002;i++)
    {
        if(ans[i] != -1)
        {
            cout<<i<<" "<<ans[i]<<endl;
        }
    }

}
