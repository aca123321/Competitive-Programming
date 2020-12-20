#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,k,b,c,x,y,j;

    cin>>n>>k;
    map<lli, lli> m,mc;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(i=0;i<n;i++)
    {
        a = arr[i];
        m[a]++;
        b = 0;
        while(a != 0)
        {
            a /= 2;
            b++;
            mc[a] += b;
        }
    }

}
