#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,j,k,b,c,x,y,sum=0;

    cin>>n;
    lli brr[n-1],arr[n];

    for(i=0;i<n-1;i++)
    {
        cin>>brr[i];
    }
    sum += brr[0];
    for(i=1;i<n;i++)
    {
        sum += min(brr[i-1],brr[i]);
    }

    cout<<sum;
}
