#include<iostream>
using namespace std;

main()
{
    int n,i,*arr,x=1;

    cin>>n;
    arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<n;i++)
    {
        if(arr[i] != arr[i-1])
            x++;
    }

    cout<<x;
}
