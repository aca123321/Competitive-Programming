#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int t,n,i,*arr,*ans;

    cin>>t;

    while(t--)
    {
        cin>>n;
        arr = new long long int;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        for(i=0;i<n;i++)
        {
            cout<<arr[n-1-i]<<" ";
        }

        cout<<endl;
    }
}
