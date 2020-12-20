#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,c,tot;
    cin>>t;
    lli arr[1001];
    lli sum[1001];

    while(t--)
    {
        cin>>n;
        tot = 0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sum[0] = arr[0];

        for(i=1;i<n;i++)
        {
            sum[i] = sum[i-1] + arr[i];
        }


    }

}
