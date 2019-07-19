#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,*arr,maxa,maxb,mina,minb;

    cin>>n;

    arr = new lli[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    if(n == 2)
    {
        cout<<0;
    }

    else
    {
        cout<<min(arr[n-1]-arr[1],arr[n-2]-arr[0]);
    }
}
