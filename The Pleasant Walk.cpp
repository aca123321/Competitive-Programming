#include<bits/stdc++.h>
#define lli long long int

using namespace std;

main()
{
    lli n,k,*arr,max=0,i,count = 0;

    cin>>n>>k;

    arr = new lli[n];

    cin>>arr[0];


    for(i=1;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i] != arr[i-1])
        {
            count++;
            if(count>max)
            {
                max = count;
            }
        }

        else
        {
            count = 0;
        }
    }

    cout<<max+1;
}
