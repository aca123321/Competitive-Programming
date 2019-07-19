#include<bits/stdc++.h>
using namespace std;

main()
{
    int sieve[51]={0},n,m,count=0,a,b,i;

    for(i=2;i<=50;i++)
    {
        a = i;

        if(sieve[a]==0)
        {
            b = 2*a;
            count++;
            while(b <= 50)
            {
                sieve[b]++;
                b += a;
            }
        }
    }

    cin>>n>>m;

    i = n+1;

    while(sieve[i] != 0 && i<=50)
    {
        i++;
    }

    if(sieve[i] == 0)
    {
        if(i == m)
        {
            cout<<"YES";
        }

        else
        {
            cout<<"NO";
        }
    }

    else
    {
        cout<<"NO";
    }
}

