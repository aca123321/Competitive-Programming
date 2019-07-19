#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb(x) push_back(x)
#define f first
#define s second

main()
{
    lli n,i,j,maxi,one=0,zero=0,dp[n+1][n+1]={0,0};
    map <lli, lli> m;
    string s;
    cin>>n;
    cin>>s;
    lli arr[n+1],cost[n+1]={0},sumo[n+1]={0},sumz[n+1]={0};
    vector<pair<lli , lli > > v;
    vector<lli> seg;
    arr[0] = 0;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];

        if(s[i-1] == '1')
        {
            one++;
            sumo[i] += sumo[i-1] + 1;
            sumz[i] = sumz[i-1];
        }
        else
        {
            zero++;
            sumz[i] += sumz[i-1] + 1;
            sumo[i] = sumo[i-1];
        }
    }

    lli count;

    i=0;

    while(i<n) // segments
    {
        count = 0;
        while(s[i] == s[i+1])
        {
            count++;
            i++;
        }
        seg.pb(count+1);
        i++;
    }

    for(i=0;i<=n;i++) // highest points per removal
    {
        for(j=0;j<=i;j++)
        {
            if(cost[i-j] + arr[j] > cost[i])
            {
                cost[i] = cost[i-j] + arr[j];
            }
        }
    }

    for(i=0;i<=n;i++)
    {
        m.insert({(i),cost[i]});
        v.push_back(make_pair(cost[i],i));
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    for(i=0;i<n-1;i++)
    {
        dp[i][i+1] = 0;
    }

    lli a,b;

    for(i=0;i<n;i++)
    {
        for(j=i+2;j<n;j++)
        {
            a = sumo[j] - sumo[i];
            b = sumz[j] - sumz[i];



            dp[i][j] = m[a]+m[b];
        }
    }
}
