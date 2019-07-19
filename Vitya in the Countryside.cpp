#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,*arr,i,rem;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(n == 1)
    {
        if(arr[0] == 15)
        {
            cout<<"DOWN";
        }

        else
        {
            if(arr[0] == 0)
            {
                cout<<"UP";
            }

            else
            {
                cout<<"-1";
            }
        }
    }

    else
    {
        if(arr[0]<arr[1])
        {

            rem = (arr[0] - 1 + n)%30;

            if(rem > 15)
            {
                rem = 30 - rem;


            if(rem < arr[n-1])
        {
            cout<<"DOWN";
        }

        else
        {
            cout<<"UP";
        }
        }

        else
        {
            if(rem < arr[n-1])
        {
            cout<<"DOWN";
        }

        else
        {
            cout<<"UP";
        }
        }}

        else
        {
            rem = (30 - arr[0] + n)%30;

            if(rem > 15)
            {
                rem = 30 - rem;


            if(rem < arr[n-1])
        {
            cout<<"DOWN";
        }

        else
        {
            cout<<"UP";
        }
        }

        else
        {
            if(rem < arr[n-1])
        {
            cout<<"DOWN";
        }

        else
        {
            cout<<"UP";
        }
        }
        }
    }
}
