#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

int main()
 {
    lli n,i,a,b,c,m,j,k,t,x,flag;
    cin>>t;
    lli v[31][31];
    pair<lli,lli> ans;

    while(t--)
    {
        cin>>m>>n;
        flag=0;
        ans = {-1,-1};

        for(i=0;i<31;i++)
        {
            for(j=0;j<31;j++)
            {
                v[i][j] = INT_MAX;
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>v[i][j];
            }
        }
        cin>>x;
        i=0;
        j=0;
        while(1)
        {
            a = v[i][j];
            if(a == x)
            {
                ans = {i+1,j+1};
                flag = 1;
                break;
            }
            else if(a < x)
            {
                if(i==n-1 && j==m-1)
                {
                    flag = 1;
                    break;
                }
                else if(j<m-1 && v[i][j+1])
                {
                    if(v[i+1][j] <= x)
                    {
                        i++;
                    }
                    else
                    {
                        j++;
                    }
                }
                else if(i<n-1 && v[i+1][j] <= x)
                {
                    i++;
                }
                else
                {
                    flag == 1;
                    break;
                }
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(ans.first != -1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }

	return 0;
}
