#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define s second
#define f first

main()
{
    lli n,k,i,a,b,count=0;
    cin>>n>>k;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    k--;

    for(i=k;i<n;i++)
    {
        if(arr[i] != arr[k])
        {
            cout<<-1;
            return 0;
        }
    }

    for(i=k-1;i>=0;i--)
    {
        if(arr[i] == arr[k])
        {
            count++;
        }
        else
        {
            break;
        }
    }

    k -= count;

    cout<<k;
}

