#include<iostream>
using namespace std;

int* bubsort(int* , int);

main()
{
    int n,i, *ptr, sum=0, k=0;

    cin>>n;
    ptr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
        sum += ptr[i];
    }

    ptr = bubsort(ptr, n);

    for(i=0;i<n;i++)
    {
        if(k>(sum/2))
            break;

        k += ptr[i];
    }

    cout<<i;

}


int* bubsort(int* arr, int n)
{
    int i,j,l;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
              l = arr[i];
              arr[i] = arr[j];
              arr[j] = l;
            }
        }
    }

    return arr;
}
