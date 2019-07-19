#include<iostream>
using namespace std;

main()
{
    int *arr,n,i,j;

    cin>>n;

    arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i]; //arr[i] gave gift to i+1
    }

    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j] == i)
            {
                cout<<j+1<<" ";
                break;
            }
        }
    }
}
