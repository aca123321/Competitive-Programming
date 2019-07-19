#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int n,i,k,*arr,count = 0;

    cin>>n>>k;

    arr = new long long int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]%k == 0)
        {
            count += arr[i]/k;
        }

        else
        {
            count += (arr[i]/k) + 1;
        }
    }

    if(count%2 == 0)
    {
        cout<<(count/2);
    }

    else
    {
        cout<<((count/2)+1);
    }


}
