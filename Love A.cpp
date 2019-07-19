#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,count = 0,n,req,ans;
    string s;

    cin>>s;
    n = s.length();

    for(i=0;i<n;i++)
    {
        if(s[i] == 'a')
        {
            count++;
        }
    }

    req = 2*count - 1;

    if(count > n/2)
    {
        cout<<n;
    }

    else
    {
        cout<<req;
    }
}
