#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,x,y,sum=0;

    string s;
    cin>>n>>x>>y;
    cin>>s;

    if(s[n-y-1] != '1')
    {
        sum++;
    }

    for(i=n-x;i<n;i++)
    {
        if(s[i] != '0' && i != n-y-1)
        {
            sum++;
        }
    }

    cout<<sum;
}
