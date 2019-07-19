#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,x=1,y=1,*arr;

    cin>>n;

    lli flag[10002]={0};

    arr = new lli[n];

    x = INT_MIN;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        flag[arr[i]]++;

        if(arr[i] > x)
        {
            x = arr[i];
        }

        if(flag[arr[i]] == 2)
        {
            y = (y*arr[i])/(__gcd(y,arr[i]));
        }
    }

    for(i=0;i<n;i++)
    {
        if(x%arr[i] != 0)
        {
            y = (y*arr[i])/(__gcd(y,arr[i]));
        }
    }

    cout<<x<<" "<<y;
}
