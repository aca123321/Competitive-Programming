#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,a,b,sum=0;
    cin>>n;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    if(sum%n == 0)
    {
        cout<<n;
    }
    else
    {
        cout<<n-1;
    }

}
