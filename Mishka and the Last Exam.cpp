#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,*brr,*arr,i,diff=0;

    cin>>n;

    brr = new lli[(n/2)];

    arr = new lli[n];

    cin>>brr[0];
    arr[0] = 0;
    arr[n-1] = brr[0];

    for(i=1;i<(n/2);i++)
    {
        cin>>brr[i];

        if(brr[i] < brr[i-1])
        {
            diff = brr[i-1] - brr[i];
            arr[n-1-i] = arr[n-i] - diff;
            arr[i] = arr[i-1];
        }

        else
        {
            diff = brr[i] - brr[i-1];
            arr[i] = arr[i-1] + diff;
            arr[n-1-i] = arr[n-i];
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}
