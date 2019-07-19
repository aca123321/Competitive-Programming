#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,sum=0,check=0,max=INT_MIN;
    cin>>n;
    lli arr[n-1],p[n],brr[n];
    lli flag[n]={0};

    for(i=0;i<(n-1);i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    p[0] = 0;

    for(i=1;i<n;i++)
    {
        p[i] = arr[i-1] + p[i-1];
    }

    for(i=0;i<n;i++)
    {
        if(p[i]>max)
        {
            max = p[i];
        }
    }

    for(i=0;i<n;i++)
    {
        p[i] = p[i]+(n-max);
    }

    for(i=0;i<n;i++)
    {
        brr[i] = p[i];
    }

    sort(p,p+n);

    for(i=0;i<n;i++)
    {
        if(p[i]<=n && p[i]>0)
        {
            flag[p[i]-1]++;
        }
    }

    for(i=0;i<n;i++)
    {
        if(flag[i] == 0)
        {
            check = 1;
            break;
        }
    }

    if(check == 1)
    {
        cout<<-1;
    }

    else
    {
        for(i=0;i<n;i++)
        {
            cout<<brr[i]<<" ";
        }
    }
}
