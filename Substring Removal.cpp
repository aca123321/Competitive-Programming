#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,a=1,b=1;

    string s;
    cin>>n;
    cin>>s;

    i = 1;

    while(i<n && (s[i] == s[i-1]))
    {
        a++;
        i++;
    }

    i = n-2;

    while(i>=0 && (s[i] == s[i+1]))
    {
        b++;
        i--;
    }

    if(s[0] == s[n-1])
    {
        cout<<(((a+1)*(b+1))%998244353);
    }

    else
    {
        cout<<(a+b+1);
    }

}
