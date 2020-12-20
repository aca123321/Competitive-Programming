#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,s,t,j,k,sum=0;
    string s;

    cin>>s;
    cin>>k;
    n = s.length();

    if(n == 1)
    {
        cout<<(k/2);
        return 0;
    }

    if(n == 2)
    {
        if(s[0] == s[1])
        {
            cout<<(k/2);
            return 0;
        }
        cout<<0;
        return 0;
    }
    i = 0;
    while(i<n-1)
    {

    }

}
