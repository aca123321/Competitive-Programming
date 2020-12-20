#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,a,b,k,i,j,c,x=0;

    cin>>n>>a>>b>>k;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(a >= (arr[i]%(a+b)))
        {
            x++;
        }
    }

    cout<<min(x+k,n);

}
