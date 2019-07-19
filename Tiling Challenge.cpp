#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,j;
    cin>>n;
    string s[n];

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }

    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(s[i][j] == '.')
            {
                if(s[i-1][j] == '.' && s[i+1][j] == '.' && s[i][j-1] == '.' && s[i][j+1] == '.')
                {
                    s[i-1][j] = '#';
                    s[i+1][j] = '#';
                    s[i][j+1] = '#';
                    s[i][j-1] = '#';
                    s[i][j] = '#';
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i][j] == '.')
            {
                cout<<"NO";
                return 0;
            }
        }
    }

    cout<<"YES";
}
