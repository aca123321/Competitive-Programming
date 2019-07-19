#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,*arr,x,y,count=0,can=0,moves=0;

    cin>>n>>x>>y;

    arr = new lli[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i] <= x)
        {
            can++;
        }
    }

    if(y < x)
    {
        cout<<n;
    }

    else
    {
        if(y >= x)
        {
            if(can%2 == 0)
            {
                cout<<can/2;
            }

            else
            {
                cout<<(can/2)+1;
            }
        }
    }



}
