#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli arr[4],i;

    for(i=0;i<4;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+4);

    for(i=0;i<3;i++)
    {
        cout<<arr[3]-arr[i]<<" ";
    }

}
