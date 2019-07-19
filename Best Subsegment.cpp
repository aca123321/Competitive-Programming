#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,maxi=INT_MIN;
    cin>>n;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }

    lli count = 0,a=0;

    for(i=0;i<n;i++)
    {
        if(arr[i+1] == arr[i] && arr[i] == maxi)
        {
            count++;
            if(count>a)
            {
                a = count;
            }
        }

        else
        {
            count = 0;
        }
    }

    cout<<a+1;

}
