#include<bits/stdc++.h>
using namespace std;

int bin_search(int* ,int , int, int);
int f(int*, int, int);


main()
{
    int n,q,*arr,*sum,query,i,x,*ans;

    cin>>n;

    arr = new int[n];
    sum = new int[n];
    ans = new int[n];

    cin>>arr[0];
    sum[0] = arr[0];

    for(i=1;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(i=1;i<n;i++)
    {
        sum[i] = sum[i-1] + arr[i];
    }

    cin>>query;

    for(i=0;i<query;i++)
    {
        cin>>q;
        x = bin_search(arr,0,n-1,q);

        ans[i] = x;
    }

    for(i=0;i<query;i++)
    {
        cout<<ans[i]+1<<" ";

        if(ans[i] == -1)
        {
            cout<<"0";
        }
        else
        {
            cout<<sum[ans[i]];
        }
        cout<<endl;
    }

}


int bin_search(int* arr, int low, int high, int val)
{
    int mid,i;

    mid = (high + low)/2;

    if(low == high)
    {
        if(arr[mid] <= val)
        {
            return mid;
        }

        else
        {
            return -1;
        }
    }


    if(f(arr, mid, val))
    {
        return(bin_search(arr,mid+1,high,val));
    }

    else
    {
        return(bin_search(arr,low,mid,val));
    }
}

int f(int* arr, int x, int val)
{
    if(arr[x+1] <= val)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
