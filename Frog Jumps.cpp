#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,j,a,b,c;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;
        s = 'R' + s + 'R';
        n = s.length();
        a = 0;
        b = 1;
        for(i=1;i<n;i++)
        {
            if(s[i] == 'R')
            {
                b = max(b,i-a);
                a = i;
            }
        }

        cout<<b<<endl;
    }

}
