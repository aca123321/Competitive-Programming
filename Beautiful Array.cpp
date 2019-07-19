#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,n,x,pos=0,neg=0,z=0,maxend = 0,maxsofar=0,start,endi = 0,s = 0,ans=0;

    cin>>n>>x;
    lli arr[n],sum[n]={0};

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i] > 0)
        {
            pos++;
        }
        else if(arr[i] < 0)
        {
            neg++;
        }
        else
        {
            z++;
        }
    }

    sum[0] = arr[0];

    for(i=1;i<n;i++)
    {
        sum[i] += sum[i-1] + arr[i];
    }

    if(x > 0)
    {
        maxend = 0;
        maxsofar = arr[0];
        start = 0;
        endi = 0;
        s = 0;

        for(i=0;i<n;i++)
        {
            maxend += arr[i];

            if(maxsofar < maxend)
            {
                maxsofar = maxend;
                start = s;
                endi = i;
            }

            if(maxend < 0)
            {
                maxend = 0;
                s = i+1;
            }
        }

        for(i=start;i<=endi;i++)
        {
            arr[i] = arr[i]*x;
        }

        maxend = 0;
        maxsofar = arr[0];
        start = 0;
        endi = 0;
        s = 0;

        for(i=0;i<n;i++)
        {
            maxend += arr[i];

            if(maxsofar < maxend)
            {
                maxsofar = maxend;
                start = s;
                endi = i;
            }

            if(maxend < 0)
            {
                maxend = 0;
                s = i+1;
            }
        }

        if(neg == n)
        {
            cout<<0;
        }
        else
        {
            cout<<maxsofar;
        }
    }

    else if(x < 0)
    {
        maxend = 0;
        maxsofar = arr[0];
        start = 0;
        endi = 0;
        s = 0;

        for(i=0;i<n;i++)
        {
            maxend += arr[i];

            if(maxsofar > maxend)
            {
                maxsofar = maxend;
                start = s;
                endi = i;
            }

            if(maxend > 0)
            {
                maxend = 0;
                s = i+1;
            }
        }

        for(i=start;i<=endi;i++)
        {
            arr[i] *= x;
        }

        maxend = 0;
        maxsofar = arr[0];
        start = 0;
        endi = 0;
        s = 0;

        for(i=0;i<n;i++)
        {
            maxend += arr[i];

            if(maxsofar < maxend)
            {
                maxsofar = maxend;
                start = s;
                endi = i;
            }

            if(maxend < 0)
            {
                maxend = 0;
                s = i+1;
            }
        }

        if(pos == n)
        {
            cout<<sum[n-1];
        }
        else
        {
            cout<<maxsofar;
        }
    }

    else
    {
        maxend = 0;
        maxsofar = arr[0];
        start = 0;
        endi = 0;
        s = 0;

        for(i=0;i<n;i++)
        {
            maxend += arr[i];

            if(maxsofar > maxend)
            {
                maxsofar = maxend;
                start = s;
                endi = i;
            }

            if(maxend > 0)
            {
                maxend = 0;
                s = i+1;
            }
        }

        for(i=start;i<=endi;i++)
        {
            arr[i] *= x;
        }

        maxend = 0;
        maxsofar = arr[0];
        start = 0;
        endi = 0;
        s = 0;

        for(i=0;i<n;i++)
        {
            maxend += arr[i];

            if(maxsofar < maxend)
            {
                maxsofar = maxend;
                start = s;
                endi = i;
            }

            if(maxend < 0)
            {
                maxend = 0;
                s = i+1;
            }
        }

        if(neg == n)
        {
            cout<<"0";
        }
        if(pos == n || neg == 0)
        {
            cout<<sum[n-1];
        }
        else
        {
            cout<<maxsofar;
        }
    }
}
