#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,m,i,t,a,b,c;
    string s[100];
    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        a = 0;
        for(i=0;i<n;i++)
        {
            if(s[i][m-1] == 'R')
            {
                a++;
            }
        }
        for(i=0;i<m;i++)
        {
            if(s[n-1][i] == 'D')
            {
                a++;
            }
        }
        cout<<a<<endl;
    }


}
