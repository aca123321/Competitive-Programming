#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli fin = 0,nath[200001] = {0}, nabh[200001] = {0},k;

/*
lli bin_search(lli* nabh,lli low,lli high)
{
    lli mid = (low+high)/2;

    if(mid == high)
    {
        min = low;
        return mid;
    }

    if(nabh[mid] <= k)
    {
        return(bin_search(nabh,low,mid));
    }

    else
    {
        return(bin_search(nabh,mid+1,high));
    }
}

*/

main()
{
    lli arr[200001] = {0},n,a,i,count=0,high,min;

    cin>>n>>k;

    cin>>a;
    arr[a]++;
    min = a;

    for(i=1;i<n;i++)
    {
        cin>>a;
        arr[a]++;

        if(min > a)
        {
            min = a;
        }
    }

    nabh[200000] = nath[200000] = arr[200000];

    for(i=199999; i>=1; i--)
    {
        nath[i] = nath[i+1] + arr[i];
    }

    for(i=199999; i>=1; i--)
    {
        nabh[i] = nabh[i+1] + nath[i];
    }

    high = 200000;

    while(high != min+1 || high <= min)
    {
        while(nabh[high] <= k)
        {
            high--;
        }

        count++;
    }

    cout<<count+1;
}


