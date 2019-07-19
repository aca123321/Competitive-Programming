#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,mini=INT_MAX,a;
    cin>>n;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        a = max(n-1-i,i);
        mini = min(mini,arr[i]/a);
    }

    cout<<mini;
}
