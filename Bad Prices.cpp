#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[150001],brr[150001];

main()
{
    lli n,i,a,t,k,j,b,c,x,y;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        lli mini = INT_MAX;
        for(i=0;i<n;i++)
        {
            mini = min(mini,arr[n-1-i]);
            brr[n-1-i] = mini;
        }
        a = 0;
        for(i=0;i<n;i++)
        {
            if(brr[i]<arr[i])
            {
                a++;
            }
        }

        cout<<a<<endl;
    }
}
