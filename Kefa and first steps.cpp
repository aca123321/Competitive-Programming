#include<iostream>
using namespace std;

main()
{
    int *arr,n,i,x=0,count=0;

    cin>>n;

    arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        if(arr[i+1]>=arr[i])
        {
            count++;
            if(count>x)
                x = count;
        }

        else
            count = 0;
    }

    cout<<x+1;
}

