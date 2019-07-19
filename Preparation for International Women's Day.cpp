#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb(x) push_back(x)
#define f first
#define s second

main()
{
    lli i,n,k,sum=0,a;
    cin>>n>>k;
    lli arr[n],brr[k]={0};

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[arr[i]%k]++;
    }

    sum += (brr[0]/2)*2;

    if(k%2 == 0)
    {
        for(i=1;i<(k/2);i++)
        {
            sum += 2*(min(brr[i],brr[k-i]));
        }

        sum += 2*(brr[k/2]/2);
    }

    else
    {
        for(i=1;i<=(k/2);i++)
        {
            sum += 2*(min(brr[i],brr[k-i]));
        }
    }

    cout<<sum;
}
