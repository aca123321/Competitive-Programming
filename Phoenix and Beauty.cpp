#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back
#define pf push_front

main()
{
    lli n,i,t,a,b,c,j,k;

    cin>>t;
    lli arr[101];
    map<lli,lli> m;
    vector<lli> v;

    while(t--)
    {
        cin>>n>>k;
        m.clear();
        v.clear();
        for(i=0;i<n;i++)
        {
            cin>>a;
            arr[i] = a;
            m[a]++;
        }

        if(m.size() > k)
        {
            cout<<-1<<endl;
            continue;
        }

        if(m.size() < k)
        {
            i=1;
            while(m.size()<k)
            {
                if(m[i] == 0)
                {
                    m[i]++;
                }
                i++;
            }
        }

        for(auto it: m)
        {
            v.pb(it.f);
        }

        cout<<n*k<<endl;
        for(i=0;i<n;i++)
        {
            for(auto it: v)
            {
                cout<<it<<" ";
            }
        }
        cout<<endl;

    }

}









