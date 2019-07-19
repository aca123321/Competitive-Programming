#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second
#define pb(x) push_back(x)

main()
{
    lli i,n,m,a,b;
    cin>>n>>m;

    lli arr[n];
    vector<lli> v[n];

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        v[a].pb(b);
    }



}

