#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,j;

    cin>>n;
    lli arr[n];
    vector<lli> v[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        v[i].pb(arr[i]);
        for(j=0;j<i;j++)
        {
            v[i].pb(v[i-1-j][0] + v[i][j]);
        }
    }



}
