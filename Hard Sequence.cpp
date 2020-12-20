#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,b,c,j,k;
    vector<lli> v[128];
    v[0].pb(0);
    lli arr[130];
    arr[0] = 0;
    lli brr[130][130];

    for(j=0;j<129;j++)
    {
        brr[0][j] = 0;
    }
    brr[0][0] = 1;

    for(i=0;i<128;i++)
    {
        for(j=0;j<129;j++)
        {
            brr[i+1][j] = brr[i][j];
        }

        if(v[arr[i]].size() == 1)
        {
            arr[i+1] = 0;
            v[0].pb(i+1);
            brr[i+1][0]++;
        }
        else
        {
            a = v[arr[i]][v[arr[i]].size()-1] - v[arr[i]][v[arr[i]].size()-2];
            arr[i+1] = a;
            v[a].pb(i+1);
            brr[i+1][a]++;
        }
    }

    cin>>t;

    while(t--)
    {
        cin>>n;
        n--;

        cout<<brr[n][arr[n]]<<endl;
    }

}
