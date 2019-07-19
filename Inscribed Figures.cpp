#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first

main()
{
    lli i,n,flag = 0,count=0,a;
    cin>>n;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        if( (arr[i] == 2 && arr[i+1] == 3 ) || (arr[i] == 3 && arr[i+1] == 2 ))
        {
            flag = 1;
            break;
        }
        else
        {
            if(arr[i] == 1)
            {
                if(arr[i+1] == 2 )
                {
                    count += 3;
                }
                else
                {
                    count += 4;
                }
            }

            else if(arr[i] == 2)
            {
                if(arr[i+1] == 1 )
                {
                    count += 3;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                if(arr[i+1] == 1 )
                {
                    count += 4;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    for(i=0;i<n-2;i++)
    {
        if(arr[i] == 3)
        {
            if(arr[i+1] == 1)
            {
                if(arr[i+2] == 2)
                {
                    count--;
                }
            }
        }
    }

    if(flag == 1)
    {
        cout<<"Infinite";
    }
    else
    {
        cout<<"Finite\n"<<count;
    }
}
