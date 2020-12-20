#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[100001],sum[100001];
pair<lli, pair<lli,lli>> dp[100001];

lli sumtill(lli i, lli j)
{
    return (sum[j]-sum[i]+arr[i]);
}

main()
{
    lli n,i,t,a,b,c,j,k,l,maxi,x,y;

    cin>>t;

    while(t--)
    {
        cin>>n>>k>>l;
        maxi = INT_MIN;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        a = arr[0];
        sum[0] = arr[0];
        for(i=1;i<n;i++)
        {
            sum[i] = sum[i-1] + arr[i];
        }

        maxi = sumtill(0,k);
        for(i=1;i<l;i++)
        {
            x = k-(2*i);
            a = sumtill(0,x);
            b = 0;
            for(j=1;j<=x;j++)
            {
                c = (i-1)*arr[j] + (i)*arr[j-1];
                b = max(b,c);
            }
            a += b;
            maxi = max(maxi, a);
        }

        cout<<maxi<<endl;
    }

}
