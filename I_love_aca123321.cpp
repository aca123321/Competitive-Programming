#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,*arr,max=0,min = INT_MAX,count=0;

    cin>>n;

    arr = new lli[n];

    cin>>arr[0];

    max = min = arr[0];

    for(i=1;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]>max || arr[i] <min)
        {
            count++;

            if(arr[i] > max)
            {
                max = arr[i];
            }

            if(arr[i]<min)
            {
                min = arr[i];
            }
        }
    }

    cout<<count;
}
