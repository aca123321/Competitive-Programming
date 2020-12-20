#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli arr[200001];

main()
{
    lli n,i,t,a,b,c,j,mini,count;

    map<lli, lli> m;
    vector<pair<lli,lli>> v;
    vector<lli> p;

    cin>>t;

    while(t--)
    {
        cin>>n;
        m.clear();
        v.clear();

        map<lli, vector<lli>> ind;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }

        if(m.size() == 1)
        {
            cout<<0<<endl;
            continue;
        }

        for(auto it: m)
        {
            v.pb({it.sec,it.f});
            ind[it.f].pb(-1);
        }

        for(i=0;i<n;i++)
        {
            ind[arr[i]].pb(i);
        }

        sort(v.begin(),v.end());

        mini = INT_MAX;
        mini = v[0].f;
        count = 0;

        count = m.size();

        mini = INT_MAX;
        for(i=0;i<count;i++)
        {
            a = 0;
            b = 0;

            ind[v[i].sec].pb(n);

            //cout<<"considering "<<v[i].sec<<endl;

            for(j=1;j<ind[v[i].sec].size();j++)
            {
                if(ind[v[i].sec][j-1] == 0 || ind[v[i].sec][j] == n-1)
                {
                    b++;
                }
                if(ind[v[i].sec][j] - ind[v[i].sec][j-1] > 1)
                {
                    a++;
                }
            }

            //cout<<"got a = "<<a<<endl;

            mini = min(mini,a);
        }

        cout<<mini<<endl;

    }

}

