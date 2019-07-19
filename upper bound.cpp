#include<bits/stdc++.h>
using namespace std;

int n;

int upper(int* arr, int x, int low, int high)
{
    int mid = (low+high)/2;

    if(mid == high)
    {
        return arr[mid];
    }

    if(arr[mid] == x)
    {
        if(mid == n-1)
        {
            return x;
        }
        else if(arr[mid+1] != x)
        {
            return arr[mid+1];
        }
        else
        {
            return upper(arr,x,mid+1,high);
        }
    }

    else if(arr[mid] < x)
    {
        return upper(arr,x,mid+1,high);
    }

    else
    {
        if(arr[mid-1] <= x)
        {
            return arr[mid];
        }
        else
        {
            return upper(arr,x,low,mid);
        }
    }
}


main()
{
    int i,x;
    cout<<"Enter the no. of elements\n";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element you want to find the upper bound of:\n";
    cin>>x;

    sort(arr, arr+n);

    int u = upper(arr,x,0,n-1);

    cout<<u;
}
