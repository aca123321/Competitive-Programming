#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,j=0,a;

    string s,t="";

    cin>>n;
    cin>>s;

    i = 0;

    while(i<n)
    {
        t += s[i];
        j++;
        i += j;
    }

    cout<<t;
}
