#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli maxi,numdiv[1000002];

void div(lli maxi)
{
    lli i,j;

    for(i=1;i<=maxi;i++)
    {
        numdiv[i] = 1;
    }

    for(i=2;i<=maxi;i++)
    {
        for(j=i;j<=maxi;j+=i)
        {
            numdiv[j]++;
        }
    }
}

main()
{
    lli n,i,a,b,c,j,k,ans=0,x;

    cin>>a>>b>>c;

    maxi = a*b*c;
    div(maxi);

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            for(k=1;k<=c;k++)
            {
                x = i*j*k;
                ans += numdiv[x];
            }
        }
    }

    cout<<ans%(1073741824);
}
