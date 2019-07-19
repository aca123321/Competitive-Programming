#include<iostream>
using namespace std;

int* bubsort(int*, int);

main()
{
    int n, *arr, i;

    cin>>n;
    arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    arr = bubsort(arr,n);

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int* bubsort(int *arr, int n)
{
    int i,j,l;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
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
