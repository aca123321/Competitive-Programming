#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,k,i,*arr,flag = 0,count=0,ans=0;

    cin>>n>>k;

    arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i] + k > 5)
        {
            arr[i] = INT_MAX;
            count++;
        }
    }

    sort(arr,arr+n);

    if(n - count < 3)
    {
        cout<<"0";
    }

    else
    {
        cout<<(n-count)/3;
    }


}
