#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,b,c,j,mini;
    map<pair<lli,lli>,vector<lli>> m;
    string s;
    cin>>t;
    pair<lli,lli> a,ans;
    vector<lli> v;

    while(t--)
    {
        m.clear();
        cin>>n;
        cin>>s;

        a = {0,0};
        m[a].pb(0);

        for(i=0;i<n;i++)
        {
            if(s[i] == 'L')
            {
                a.f = a.f - 1;
            }
            if(s[i] == 'R')
            {
                a.f = a.f + 1;
            }
            if(s[i] == 'U')
            {
                a.sec = a.sec + 1;
            }
            if(s[i] == 'D')
            {
                a.sec = a.sec - 1;
            }
            m[a].pb(i+1);
        }

        mini = INT_MAX;

        for(auto it: m)
        {
            if(it.sec.size() > 1)
            {
                v = it.sec;
                /*
                cout<<"{"<<it.f.f<<", "<<it.f.sec<<"} "<<": ";
                for(i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                }
                cout<<endl;
                */

                for(i=1;i<v.size();i++)
                {
                    if(mini > v[i]-v[i-1])
                    {
                        mini = v[i] - v[i-1];
                        ans = {v[i-1]+1,v[i]};
                    }
                }
            }
        }

        if(mini == INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans.f<<" "<<ans.sec<<endl;
        }

    }


}
