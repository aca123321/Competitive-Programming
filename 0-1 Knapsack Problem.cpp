#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli dp[1001][1001];

int main()
 {
    lli n,i,a,b,c,w,m,j,k,t;
    vector<lli> vv,vw;
    cin>>t;


    while(t--)
    {
        cin>>n>>w;

        for(i=0;i<n;i++)
        {
            cin>>a;
            vv.pb(a);
        }
        for(i=0;i<n;i++)
        {
            cin>>a;
            vw.pb(a);
        }

        for(i=0;i<=n;i++)
        {
            dp[i][0] = 0;
        }
        for(i=0;i<=w;i++)
        {
            dp[0][i] = 0;
        }

        for(i=1;i<=w;i++) // j is the number of items to choose from and i is the current capacity to make that choice
        {
            for(j=1;j<=n;j++)
            {
                if(i>=vw[j-1])
                {
                    a = vw[j-1];
                    dp[j][i] = max(dp[j-1][i-a] + vv[j-1] , dp[j-1][i]);
                }
                else
                {
                    dp[j][i] = dp[j-1][i];
                }
            }
        }
/*
        for(i=0;i<=w;i++)
        {
            for(j=0;j<=n;j++)
            {
                cout<<dp[j][i]<<" ";
            }
            cout<<endl;
        }
*/
        cout<<dp[n][w]<<endl;

    }


	return 0;
}
