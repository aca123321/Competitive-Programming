#include<iostream>
using namespace std;

main()
{
    int n,i,x=0,*arr;

    cin>>n;

    arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<3;i++)
    {
        if(arr[i]%2 == 0)
            x++;
    }

    if(x>=2) // majority of the first 3 numbers are even
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]%2 != 0)
            {
                cout<<i+1;
                break;
            }
        }
    }

    else   // majority of the first 3 numbers are odd
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]%2 == 0)
            {
                cout<<i+1;
                break;
            }
        }
    }
}
