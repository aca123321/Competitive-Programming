#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,*arr,i,sum=0;

    cin>>n;

    arr = new lli[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(i=0;i<n;i+=2)
    {
        sum += arr[i+1] - arr[i];
    }

    cout<<sum;
}
