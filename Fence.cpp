#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,k,a,b,x,sum=0,mini=INT_MAX;

    cin>>n>>k;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    lli ind;

    for(i=0;i<k;i++)
    {
        sum += arr[i];
    }

    mini = sum;
    ind = 1;

    for(i=k;i<n;i++)
    {
        sum += arr[i];
        sum -= arr[i-k];
        if(sum<mini)
        {
            mini = sum;
            ind = i-k+2;
        }
    }

    cout<<ind;
}
