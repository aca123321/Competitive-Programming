#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli a,i,n,x,y,sum = 0;
    cin>>x;
    map<lli , lli> m;

    if(x/10 == 0)
    {
        cout<<9;
        return 0;
    }

    m[x]++;
    if(x%10 == 0)
    {
        sum++;
        x++;
    }

    while(1)
    {
        if(x/10 == 0)
        {
            sum += 9;
            break;
        }

        a = (x%10);
        if(a == 0)
        {
            while(x%10 == 0)
            {
                x /= 10;
            }
        }
        else
        {
            sum += 10 - a;
            x += 10 - a;
            while(x%10 == 0)
            {
                x /= 10;
            }
        }
    }

    cout<<sum;
}
