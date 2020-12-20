#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,j,k,b,c,x,y,sum=0;

    cin>>n;
    lli arr[n],brr[n],crr[n-1];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]--;
    }

    for(i=0;i<n;i++)
    {
        cin>>brr[i];
    }

    for(i=0;i<n-1;i++)
    {
        cin>>crr[i];
    }
    lli pre = -2;
    for(i=0;i<n;i++)
    {
        a = arr[i];

        if(a == pre+1)
        {
            sum += crr[a-1];
        }
        sum += brr[a];
        pre = a;
    }

    cout<<sum;
}
