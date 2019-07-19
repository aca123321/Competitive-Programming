#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,n,x,y,count = 0,z;

    cin>>x;
    lli arr[22] = {0};
    vector<lli> v;
    y = x;
    z = x;

    for(i=0;i<21;i++)
    {
        if(round(pow(2,i)) - 1 == x)
        {
            cout<<0;
            return 0;
        }
    }

    i=0;
    while(1)
    {
        arr[i] = (x%2);
        x /= 2;
        i++;
        if(x == 0)
        {
            break;
        }
    }

    lli flag,ind=-1;
    x = y;

    while(1)
    {
        flag = 0;
        ind = -1;

        i = 0;
        y = x;
        while(1)
        {
            arr[i] = (y%2);
            y /= 2;
            i++;
            if(y == 0)
            {
                break;
            }
        }

        for(i=21;i>=0;i--)
        {
            if(arr[i] == 1 && arr[i-1] == 0)
            {
                v.pb(i);
                ind = i;
                break;
            }
        }

        y = (round(pow(2,ind)) - 1);

        if(ind != -1)
        {
            lli flag1 = 0;
            x ^= y;
            for(i=0;i<21;i++)
            {
                y = (round(pow(2,i)) - 1);
                if(y == x)
                {
                    flag1 = 1;
                    break;
                }
            }
            if(flag1 == 0)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        x += 1;

        lli flag2 = 0;
        for(i=0;i<21;i++)
        {
            y = (round(pow(2,i)) - 1);
            if(y == x)
            {
                flag2 = 1;
                break;
            }
        }
        if(flag2 == 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    n = v.size();

    cout<<count<<endl;
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
