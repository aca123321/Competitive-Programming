#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,k,j,b,c,x,y;

    cin>>n;
    lli arr[n],brr[2]={0};

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[arr[i]%2]++;
    }

    cout<<min(brr[0],brr[1]);
}
