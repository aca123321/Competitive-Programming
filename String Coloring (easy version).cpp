#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b;
    string s,t;
    cin>>n;
    cin>>s;

    t = "0";
    char maxi = s[0];
    for(i=1;i<n;i++)
    {
        if(s[i]<maxi)
        {
            t += '1';
        }
        else
        {
            maxi = s[i];
            t += '0';
        }
    }

    cout<<"YES\n";
    cout<<t;
}
