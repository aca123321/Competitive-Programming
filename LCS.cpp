#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

int main()
 {
    lli n,i,c,m,j,k,t;
    vector<lli> v;
    cin>>t;
    string a,b;
    lli dp[101][101];

    while(t--)
    {
        cin>>n>>m;
        cin>>a;
        cin>>b;

        if(a[0] == b[0])
        {
            dp[0][0] = 1;
        }
        else
        {
            dp[0][0] = 0;
        }

        for(i=1;i<n;i++)
        {
            if(a[i] == b[0])
            {
                dp[i][0] = 1;
            }
            else
            {
                dp[i][0] = 0;
            }
            dp[i][0] = max(dp[i-1][0] , dp[i][0]);
        }

        for(i=1;i<m;i++)
        {
            if(a[0] == b[i])
            {
                dp[0][i] = 1;
            }
            else
            {
                dp[0][i] = 0;
            }
            dp[0][i] = max(dp[0][i-1] , dp[0][i]);
        }

        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(a[i] == b[j])
                {
                    dp[i][j] = max(dp[i-1][j-1] + 1, max(dp[i-1][j], dp[i][j-1]));
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        /*
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        */
        cout<<dp[n-1][m-1]<<endl;
    }


	return 0;
}
