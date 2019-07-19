#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

vector<lli> arr[500001];

main()
{
    lli i,n,n,m,j,k,a,b;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<lli>> v;
    lli done[m]={0};
    set<lli > s[m];

    for(i=0;i<m;i++)
    {
        cin>>a;
        for(j=0;j<a;j++)
        {
            cin>>b
            v[i].pb(b);
            arr[b].pb(i);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<v[i].size();i++)
        {
            for(k=0;k<arr[v[i][j]].size();k++)
            {
                set[i].insert(arr[v[i][j]][k]);
            }
        }
    }



}
