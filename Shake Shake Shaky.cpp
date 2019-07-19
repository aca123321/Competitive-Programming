#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli bin_search(lli*, lli,lli, lli, lli);
int f(lli*, lli, lli, lli);

int main()
{
    lli t,n,k,i,*arr,max,a;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

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

        a = bin_search(arr,k,n,1,max);

        cout<<a<<endl;
    }

    return 0;
}

lli bin_search(lli *arr,lli k, lli n ,lli low, lli high)
{
    lli i,mid = (high+low)/2;

    if(low == high || low == high - 1)
    {
        if(f(arr,k,n,high))
        {
            return high;
        }

        else
        {
            return mid;
        }
    }

    if(f(arr,k,n,mid))
    {
        return(bin_search(arr,k,n,mid,high));
    }

    else
    {
        return(bin_search(arr,k,n,low,mid-1));
    }
}


int f(lli *arr,lli k, lli n, lli x)
{
    lli count=0,i;

    for(i=0;i<n;i++)
    {
        if(arr[i]>=x)
        {
            count += (arr[i]/x);
        }
    }

    if(count >= k)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
