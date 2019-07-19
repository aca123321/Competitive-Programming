#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,t,sum=0,j,min=INT_MAX,max=INT_MIN,ans,mini=INT_MAX,rest;

    cin>>n;

    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]<min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    for(i=min;i<=max;i++)
    {
        t = i;
        ans = 0;

        for(j=0;j<n;j++)
        {
            if(arr[j]<t-1)
            {
                ans += abs(t-1-arr[j]);
            }

            else if(arr[j]>t+1)
            {
                ans += abs(arr[j] - t - 1);
            }
        }

        if(ans<mini)
        {
            mini = ans;
            rest = t;
        }
    }

    cout<<rest<<" "<<mini;
}
