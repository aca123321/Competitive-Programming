#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli x,y,n=0,i,j,sum=1;

    cin>>x;
    y = x;
    while(x != 0)
    {
        x/=10;
        n++;
    }

    lli arr[n];

    for(i=0;i<n;i++)
    {
        arr[n-1-i] = y%10;
        y /= 10;
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] >1)
        {
            j = i;
            while(j<n)
            {
                arr[j] = 1;
                j++;
            }
        }
    }

    for(i=1;i<n;i++)
    {
        sum += arr[n-i]*(round(pow(2,(i-1))));
    }

    sum += round(pow(2,n-1)) - 1;

    cout<<sum;
}
