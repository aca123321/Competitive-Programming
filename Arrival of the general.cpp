#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,*arr,i,max = 0, min = 0;

    cin>>n;

    arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] > arr[max])
        {
            max = i;
        }

        if(arr[i] <= arr[min])
        {
            min = i;
        }
    }

    if(max>min)
    {
        cout<<max+n-2-min;
    }

    else
    {
        cout<<max+n-1-min;
    }
}
