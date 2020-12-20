#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli dp[1000001];

int main()
 {
    lli n,i,a,b,c,m,j,x,k,t;
    vector<lli> v;
    cin>>t;


    while(t--)
    {
        cin>>x>>n;
        v.clear();
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.pb(a);
        }
        dp[0] = 0;
        for(i=1;i<=x;i++)
        {
            dp[i] = 0;
            a = INT_MAX;
            for(j=0;j<n;j++)
            {
                if(v[j]<=i)
                {
                    if(dp[i-v[j]] > 0 || i == v[j])
                    {
                        a = min(a,1+dp[i-v[j]]);
                    }
                }
                dp[i] = a;
            }

        }
        if(dp[x] == INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<dp[x]<<endl;
        }

    }


	return 0;
}
