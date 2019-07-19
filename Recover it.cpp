#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli sieve[200003]={0},p[17985];


lli sieveinit()
{
    lli i,a,j=1;

    p[j++] = 2;
    for(i=4;i<=200002;i+=2)
    {
        sieve[i] = 1;
    }

    for(a=3;a<=200002;a+=2)
    {
        if(sieve[a] == 0)
        {
            p[j++] = a;
            for(i=a*a;i<=200002;i+=a)
            {
                sieve[i] = 1;
            }
        }
    }
    return 1;
}

main()
{
    lli n,i,a;
    vector<lli> vp,vnp;

    a = sieveinit();

    cin>>n;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(sieve[arr[i]] == 0)
        {
            vp.pb(arr[i]);
        }
        else
        {
            vnp.pb(arr[i]);
        }
    }

    for(i=0;i<vp.size();i++)
    {

    }
}
