#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second
#define pb push_back
#define mp make_pair

main()
{
    lli n,k,a,b,sum=0,c=0;

    cin>>n>>k;

    if(k==n)
    {
        cout<<2;
    }

    else
    {
        sum += 2;
        if(((n-k)%(k)) == 0)
        {
            sum += max(c,(((n-k)/k)-1)*2);
        }
        else
        {
            sum += ((n-k)/k)*2;
        }
        b = ((n-k)%k);
        if(b != 1)
        {
            if(b != 0)
            {
                if(b == 2)
                {
                    sum++;
                }

                else
                {
                    sum += 2;
                }
            }

            else
            {
                if(k == 2)
                {
                    sum++;
                }
                else
                {
                    sum += 2;
                }
            }
        }
        cout<<sum;
    }
}
