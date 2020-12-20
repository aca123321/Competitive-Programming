#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

int main()
 {
    lli n,i,sum,a,b,c,m,j,k,t;
    vector<lli> v;
    cin>>t;
    lli dp[51][2501];

    while(t--)
    {
        cin>>n;
        v.clear();
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.pb(a);
            sum += a;
        }
        a = sum;
        sum /= 2;

        for(i=0;i<n;i++)
        {
            dp[i][0] = 1;
        }

        for(i=1;i<=sum;i++)
        {
            if(i == v[0])
            {
                dp[0][i] = 1;
            }
            else
            {
                dp[0][i] = 0;
            }
        }

        for(i=1;i<n;i++)
        {
            for(j=1;j<=sum;j++)
            {
                if(v[i] > j)
                {
                    dp[i][j] = dp[i-1][j];
                }
                else
                {
                    if(dp[i-1][j] == 1)
                    {
                        dp[i][j] = 1;
                    }
                    else if(dp[i-1][j-v[i]] == 1)
                    {
                        dp[i][j] = 1;
                    }
                    else
                    {
                        dp[i][j] = 0;
                    }
                }

            }
        }
        /*
        cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" -> ";
            for(j=0;j<=sum;j++)
            {
                cout<<"("<<j<<", "<<dp[i][j]<<") ";
            }
            cout<<endl<<endl;
        }
        */
        lli flag = 0;

        for(i=sum;i>=0;i--)
        {
            for(j=0;j<n;j++)
            {
                if(dp[j][i] == 1)
                {
                    //cout<<"#"<<a-i<<" "<<i<<endl;
                    a -= i;
                    a = abs(a-i);
                    flag = 1;
                    break;
                }
            }

            if(flag == 1)
            {
                break;
            }
        }

        cout<<a<<endl;
    }


	return 0;
}
