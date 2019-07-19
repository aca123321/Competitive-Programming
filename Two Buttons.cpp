#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    lli n,m,i,count=0;

    cin>>n>>m;

    if(n>=m)
    {
        cout<<n-m;
        return 0;
    }

    while(m>n)
    {
        count++;
        if(m%2 == 0)
        {
            m/=2;
        }
        else
        {
            m++;
        }
    }

    count += n-m;

    cout<<count;
}
