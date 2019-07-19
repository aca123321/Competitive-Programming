#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int n,*arr,i,c=0,min = 0;

    cin>>n;
    arr = new long long int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]<arr[min])
        {
            min = i;
        }
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] == arr[min])
        {
            c++;
        }
    }

    if(c>1)
    {
        cout<<"Still Rozdil";
    }

    else
    {
        cout<<min+1;
    }

}
