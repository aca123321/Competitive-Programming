#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli bin_search(lli *, lli,lli, lli,lli);
int f(lli*,lli,lli, lli);

main()
{
    lli n,h,a,*arr,k,i,t,max;

    cin>>t;

    while(t--)
    {
        cin>>n>>h;

        arr = new lli[n];

        cin>>arr[0];
        max = arr[0];

        for(i=1;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }

        a = bin_search(arr,1,max,n,h);

        cout<<a<<endl;
    }

}

lli bin_search(lli * arr, lli low, lli high, lli n, lli h)
{
    lli mid = (high+low)/2;

    if(low == high)
    {
        return mid;
    }

    if(f(arr,mid,n,h))
    {
        return(bin_search(arr,low,mid,n,h));
    }

    else
    {
        return(bin_search(arr,mid+1,high,n,h));
    }
}

int f(lli* arr, lli x, lli n, lli h)
{
    lli sum=0,i;

    for(i=0;i<n;i++)
    {
        if(arr[i]%x == 0)
        {
            sum += arr[i]/x;
        }

        else
        {
            sum += (arr[i]/x) + 1;
        }
    }

    if(sum<=h)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
