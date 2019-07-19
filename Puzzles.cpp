#include<iostream>
using namespace std;

int* bubsort(int* ,int);

main()
{
    int i,n,m,*arr,k,x;

    cin>>n>>m;

    arr = new int[m];

    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }

    arr = bubsort(arr, m);

    k = arr[n-1] - arr[0];
    x = k;

    for(i=1;i<=(m-n);i++)
    {
        k = arr[i+n-1] - arr[i];
        if(k<x)
        {
            x = k;
        }
    }

    cout<<x;
}

int* bubsort(int* arr, int m)
{
    int i,j,l;

    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(arr[j]<arr[i])
            {
                l = arr[i];
                arr[i] = arr[j];
                arr[j] = l;
            }
        }
    }

    return arr;
}
