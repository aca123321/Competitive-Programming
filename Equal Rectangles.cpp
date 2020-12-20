#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,c,j,k,x,y;

    cin>>t;
    lli arr[401];
    map<lli,lli> m;
    vector<lli> v;

    while(t--)
    {
        cin>>n;
        v.clear();
        m.clear();
        b = 0;
        for(i=0;i<(4*n);i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        for(auto it: m)
        {
            if((it.sec)%2 == 0)
            {
                for(i=0;i<(it.sec)/2;i++)
                {
                    v.pb(it.f);
                }
            }
            else
            {
                b = 1;
            }
        }
        sort(v.begin(),v.end());
        n = v.size();
        a = v[0]*v[n-1];
        for(i=1;i<n/2;i++)
        {
            if(v[i] * v[n-1-i] != a)
            {
                b = 1;
            }
        }
        if(b == 0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }

    return 0;

}

/*
cin>>n;
        m.clear();
        v.clear();
        b = 0;

        for(i=0;i<4*n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }

        for(auto it: m)
        {
            if((it.sec)%2 == 0)
            {
                for(i=0;i<(it.sec)/2;i++)
                {
                    v.pb(it.f);
                }
            }
            else
            {
                cout<<"NO\n";
                continue;
            }
        }
        sort(v.begin(),v.end());
        n = v.size();
        v.pb(arr[n-1]);
        a = v[0]*v[n-1];
        for(i=1;i<=n/2;i++)
        {
            j = n-i-1;
            if(v[i]*v[j] != a)
            {
                b = 1;
                break;
            }
        }
        if(b == 0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

*/
