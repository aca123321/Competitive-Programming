#include<bits.stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,n,*arr,*brr,sum;

    cin>>t;

    while(t--)
    {
        cin>>n;

        sum = 0;

        arr = new lli[n];
        brr = new lli[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n;i++)
        {
            cin>>brr[i];
        }

        for(i=0;i<n;i++)
        {
            sum += arr[i]*brr[i];
        }


    }


}
