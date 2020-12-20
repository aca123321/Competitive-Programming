#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,b,c,j,k;

    cin>>t;
    string s,p[100001];
    map<char,vector<lli>> m;

    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        m.clear();
        for(i=0;i<k;i++)
        {
            cin>>p[i];
            for(j=0;j<p[i].size();j++)
            {
                m[p[i][j]].pb(i);
            }
        }



    }

}
