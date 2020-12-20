#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli dp[201][22]; // i -> money remaining, j -> garment category to select from ||||||||  dp[i][j] gives the money remaining after selecting a cloth from (j-1)th category
vector<lli> v[22];
lli m,c,t;

lli remaining(lli rem, lli cat)
{
    lli i,j,a,b,ret;

    if(dp[rem][cat] != INT_MAX)
    {
        return dp[rem][cat];
    }
    if(cat == c)
    {
        return rem;
    }

    if(rem < 0)
    {
        return INT_MAX;
    }
    ret = INT_MAX;
    for(i=0;i<v[cat].size();i++)
    {
        a = v[cat][i];
        if(t == 1)
        {
            //cout<<"calling("<<rem-a<<", "<<cat+1<<") \n";
        }
        if(rem >= a)
        {
            b = remaining(rem-a, cat+1);
            ret = min(ret, b);
        }
    }
    dp[rem][cat] = ret;
    //cout<<"dp["<<rem<<"]["<<cat<<"] = "<<ret<<endl;
    return ret;
}

main()
{
    lli n,i,j,a,b;

    cin>>t;

    while(t--)
    {
        cin>>m>>c;

        for(i=0;i<c;i++)
        {
            v[i].clear();
            cin>>n;
            for(j=0;j<n;j++)
            {
                cin>>a;
                v[i].pb(a);
            }
        }

        for(i=0;i<201;i++)
        {
            for(j=0;j<22;j++)
            {
                dp[i][j] = INT_MAX;
            }
        }

        a = remaining(m,0);
        if(a != INT_MAX)
        {
            cout<<m-a<<endl;
        }
        else
        {
            cout<<"no solution\n";
        }
    }

}
