#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,a,i,t,b,c,x,y,j,k,ans=0;
    string s;
    cin>>s;
    n = s.length();
    a = n/2;
    b = n%2;

    if(n == 1)
    {
        cout<<0;
        return 0;
    }
    c = 0;
    for(i=1;i<n;i++)
    {
        if(s[i] == '1')
        {
            c = 1;
            break;
        }
    }
    if(b == 1)
    {
        a += c;
    }
    cout<<a;
}

