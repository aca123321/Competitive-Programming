#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,*arr,i,count=0;

    cin>>n;

    arr = new lli[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            count++;

            if(count > 2)
            {
                break;
            }
        }
    }

    if(count > 2 || count == 1)
    {
        cout<<"NO";
    }

    else
    {
        cout<<"YES";
    }
}
