#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,m,a,i,j,b;

    cin>>n>>m;
    string s[n];

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j] == '.')
            {
                if((i+j)%2 == 0)
                {
                    s[i][j] = 'W';
                }
                else
                {
                    s[i][j] = 'B';
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
}
