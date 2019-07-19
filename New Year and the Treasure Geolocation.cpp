#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,**arr,**brr,i,j,k,x=0,y=0;

    cin>>n;
    arr = new lli*[n];
    brr = new lli*[n];

    for(i=0;i<n;i++)
    {
        arr[i] = new lli[2];
        brr[i] = new lli[2];
    }

    for(i=0;i<n;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];

        x += arr[i][0];
        y += arr[i][1];
    }

    for(i=0;i<n;i++)
    {
        cin>>brr[i][0];
        cin>>brr[i][1];

        x += brr[i][0];
        y += brr[i][1];
    }

    cout<<x/n<<" "<<y/n;

}
