#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,n,count=0,req,ans;
    string s;

    cin>>n;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i] == '8' && i < (n-10))
        {
            count++;
        }
    }

    req = ((n-11)/2);

    if(req>=count)
    {
        cout<<"NO";
    }

    else
    {
        cout<<"YES";
    }


}
