#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

lli dp[3002][3002];
lli dir[3002][3002];

main()
{
    lli a,b,j,i,c,n,m;
    string s,t,ans="";

    cin>>s;
    cin>>t;
    n = s.length();
    m = t.length();
    for(i=0;i<n;i++)
    {
        dp[i][0] = 0;
        dir[i][0] = 1;
    }
    for(i=0;i<m;i++)
    {
        dp[0][i] = 0;
        dir[0][i] = 3;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(s[i-1] == t[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
                dir[i][j] = 2;
            }
            else
            {
                if(dp[i-1][j] >= dp[i][j-1] )
                {
                    dp[i][j] = dp[i-1][j];
                    dir[i][j] = 1;
                }
                else
                {
                    dp[i][j] = dp[i][j-1];
                    dir[i][j] = 3;
                }
            }
        }
    }
    i = n;
    j = m;
    while(dp[i][j] > 0)
    {
        if(dir[i][j] == 1)
        {
            i--;
        }
        else if(dir[i][j] == 3)
        {
            j--;
        }
        else
        {
            ans += s[i-1];
            i--;
            j--;
        }
    }
    if(dp[n][m] == 0)
    {
        cout<<"";
        return 0;
    }

    for(i=ans.length()-1;i>=0;i--)
    {
        cout<<ans[i];
    }
}
