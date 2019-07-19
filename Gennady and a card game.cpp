#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,c=0;

    string s[6];

    cin>>s[0];

    for(i=1;i<6;i++)
    {
        cin>>s[i];
    }

    for(i=1;i<6;i++)
    {
        if(s[i][0] == s[0][0] || s[i][1] == s[0][1])
        {
            cout<<"YES";
            c = 1;
            break;
        }
    }

    if(c != 1)
    {
        cout<<"NO";
    }








}
