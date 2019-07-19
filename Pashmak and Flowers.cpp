#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,maxi=INT_MIN,mini=INT_MAX,a,b;

    cin>>n;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    a = 0;
    b = 0;

    if(arr[0] == arr[n-1])
    {
        cout<<0<<" ";
        cout<<(n*(n-1))/2;
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] == arr[0])
        {
            a++;
        }
        if(arr[n-1-i] == arr[n-1])
        {
            b++;
        }
        else if((arr[i] != arr[0]))
        {
            break;
        }
    }

    cout<<arr[n-1]-arr[0]<<" ";
    cout<<a*b;

}
