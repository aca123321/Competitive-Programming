#include<iostream>
using namespace std;

void insertionsort(long int*,long int );

main()
{
    long int i,l,j,t,n,k,*arr,*ans,temp;

    cin>>t;
    ans = new long int[t];

    for(l=0;l<t;l++)
    {
        cin>>n>>k;

        arr = new long int[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        insertionsort(arr,n);

        ans[l] = 0;

        for(i=0;i<k;i++)
        {
            ans[l] += arr[n-1-i];
        }
    }

    for(l=0;l<t;l++)
    {
        cout<<ans[l]<<endl;
    }
}


void insertionsort(long int* arr, long int n)
{
    long int i,j,beg;

    for(i=1;i<n;i++)
    {
        beg = arr[i];
        j = i-1;

        while((j>=0)&&(arr[j]>beg))
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = beg;
    }
}
