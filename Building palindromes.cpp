#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define push_back
#define f first
#define s second

lli arr[100002][26];

main()
{
    lli i,q,n,t,j,ans,l,r,k;
    lli oddeven[2];
    lli count[26];
    string s;

    cin>>t;

    for(k=0;k<t;k++)
    {
        cin>>n>>q;
        ans = 0;

        cin>>s;

        for(i=0;i<=n;i++)
        {
            for(j=0;j<26;j++)
            {
                arr[i][j] = 0;
            }
        }

        for(i=1;i<=n;i++)
        {
            for(j=0;j<26;j++)
            {
                arr[i][j] = arr[i-1][j];
            }
            arr[i][int(s[i-1]) - int('A')]++;
        }

        for(j=0;j<q;j++)
        {
            cin>>l>>r;

            for(i=0;i<26;i++)
            {
                count[i] = arr[r][i] - arr[l-1][i];
            }

            for(i=0;i<2;i++)
            {
                oddeven[i] = 0;
            }

            for(i=0;i<26;i++)
            {
                if(count[i]%2 == 0)
                {
                    oddeven[1]++;
                }
                else
                {
                    oddeven[0]++;
                }
            }

            if((r-l+1)%2 == 0)
            {
                if(oddeven[0]==0)
                {
                    ans++;
                }
            }
            else
            {
                if(oddeven[0]==1)
                {
                    ans++;
                }
            }
        }

        cout<<"Case #"<<k+1<<": "<<ans<<endl;
    }

}
