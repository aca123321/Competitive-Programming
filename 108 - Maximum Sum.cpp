#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli arr[105][105], sum[105][105];

lli fun(lli a, lli b, lli i, lli j)
{
    lli x,y,c,d;

    y = sum[a-1][b-1];
    x = sum[i][j];
    c = sum[i][b-1];
    d = sum[a-1][j];

    //cout<<"x, y, c, d:"<<x<<", "<<y<<", "<<c<<", "<<d<<" for ("<<a<<","<<b<<") to ("<<i<<","<<j<<") -> "<<(x+y-c-d)<<" \n";

    return (x+y-c-d);
}

main()
{
    lli n,i,j,t,a,b,c,d,maxi;

    cin>>n;

    for(i=0;i<=n;i++)
    {
        arr[i][0] = 0;
        arr[0][i] = 0;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }

    sum[1][1] = arr[1][1];
    maxi = arr[1][1];

    for(i=2;i<=n;i++)
    {
        sum[1][i] = sum[1][i-1] + arr[1][i];
        sum[i][1] = sum[i-1][1] + arr[i][1];
    }

    for(i=2;i<=n;i++)
    {
        for(j=2;j<=n;j++)
        {
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + arr[i][j];
        }
    }

    /*
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(a=1;a<=i;a++)
            {
                for(b=1;b<=j;b++)
                {
                    //cout<<c++<<") ";
                    maxi = max(maxi, fun(a,b,i,j));
                }
            }
        }
    }

    cout<<maxi<<endl;
}
