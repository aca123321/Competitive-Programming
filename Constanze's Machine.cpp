#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second
#define mod 1000000007

main()
{
    lli n,i,a=1,t,j,k,b;

    lli fib[100001];

    string s;
    cin>>s;
    n = s.length();
    map<char,lli> m;

    fib[1] = 1;
    fib[2] = 2;
    fib[3] = 3;

    for(i=4;i<=n;i++)
    {
        fib[i] = ((fib[i-1]%mod) + (fib[i-2]%mod))%mod;
    }

    for(i=0;i<n;i++)
    {
        if(s[i] == 'm' || s[i] == 'w')
        {
            cout<<0;
            return 0;
        }
    }

    i = 0;
    while(i<n)
    {
        if(s[i] == 'n')
        {
            b = 1;
            i++;
            while(s[i] == 'n')
            {
                b++;
                i++;
            }
            a *= fib[b];
            a %= mod;
            i--;
        }
        else if(s[i] == 'u')
        {
            b = 1;
            i++;
            while(s[i] == 'u')
            {
                b++;
                i++;
            }
            a *= fib[b];
            a %= mod;
            i--;
        }
        i++;
    }

    cout<<a;
}

