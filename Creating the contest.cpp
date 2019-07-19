#include<iostream>
using namespace std;

main()
{
    long long int n,*arr,i,count=0,k=0;

    cin>>n;

    arr = new long long int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        if(arr[i+1] <= 2*(arr[i]))
        {
            k++;
            if(k>count)
            {
                count++;
            }
        }

        else
        {
            k=0;
        }
    }

    cout<<count+1;
}
