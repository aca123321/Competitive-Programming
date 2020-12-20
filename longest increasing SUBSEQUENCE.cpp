#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

int main()
 {
    lli n,i,a,b,c,m,j,k,t;
    vector<lli> v;
    cin>>t;
    lli dp[1001];

    while(t--)
    {
        cin>>n;
        v.clear();

        for(i=0;i<n;i++)
        {
            cin>>a;
            v.pb(a);
        }
        dp[0] = 1;
        lli maxi,maxii=1;
        for(i=1;i<n;i++)
        {
            maxi=1;
            for(j=0;j<i;j++)
            {
                if(v[j]<v[i] && dp[j]+1 > maxi)
                {
                    maxi = dp[j]+1;
                }
            }
            dp[i] = maxi;
            maxii = max(maxii,maxi);
        }
        cout<<maxii<<endl;
    }


	return 0;
}
