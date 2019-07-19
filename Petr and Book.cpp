#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,sum=0,a;

    int arr[7];

    cin>>n;

    for(i=0;i<7;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    if(n%sum != 0)
    {
        n = n%sum;
    }

    else
    {
        while(n-sum != 0)
        {
            n -= sum;
        }
    }

    sum=0;

    for(i=0;i<7;i++)
    {
        sum += arr[i];
        if(sum>=n)
        {
            a = i;
            break;
        }
    }

    cout<<a+1;

}
