#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,b,c,j,k,sum=0;

    cin>>t;
    lli arr[500002];

    while(t--)
    {
        cin>>n>>k;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }

        if(sum < k)
        {
            cout<<"NO\n";
            continue;
        }


    }

}
