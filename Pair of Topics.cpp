#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli n;

lli bin_search(lli arr[], lli high, lli x)
{
    lli low = 1;
    lli ret = -1;
    lli mid;

    while(low <= high)
    {
        mid = (low+high)/2;

        if(arr[mid]<=x)
        {
            low = mid+1;
        }
        else
        {
            ret = mid;
            high = mid-1;
        }
    }

    return ret;
}

main()
{
    lli i,a,b,j,c;

    cin>>n;
    lli arr[n+2];

    arr[0] = INT_MIN;
    arr[n+1] = INT_MAX;

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        cin>>b;
        arr[i+1] -= b;
    }

    sort(arr+1,arr+n+1);
    b = 0;

    for(i=1;i<=n;i++)
    {
        a = bin_search(arr,n,-arr[i]);

        if(a != -1)
        {
            if(arr[i]<=0)
            {
                b += (n-a+1);
            }
            else
            {
                b += n-a;
            }
        }
    }

    cout<<(b/2);
}
