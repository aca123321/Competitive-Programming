#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,l,r;
    cin>>n;

    lli arr[n];
    l = n-1;
    r = n-1;


    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i] == 0)
        {
            l = i;
        }

        else
        {
            r = i;
        }
    }

    cout<<(min(l,r))+1;

}
