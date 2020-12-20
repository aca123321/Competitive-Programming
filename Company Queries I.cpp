#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

vector<lli> graph[200001];
lli vis[200001], ancestor[18][200001];

main()
{
    lli n,i,t,j,a,b,c,d;

    cin>>n>>t;

    for(i=2;i<=n;i++)
    {
        cin>>a;
        ancestor[0][i] = a;
    }

    ancestor[0][1] = 0;

    for(i=1;i<18;i++)
    {
        ancestor[i][0] = 0;
        for(j=1;j<=n;j++)
        {
            if(ancestor[i-1][j] != 0)
            {
                ancestor[i][j] = ancestor[i-1][ancestor[i-1][j]];
            }
            else
            {
                ancestor[i][j] = 0;
            }
        }
    }

    while(t--)
    {
        cin>>a>>b;

        c = a;
        //cout<<"for b = "<<b<<endl;
        while(b != 0)
        {
            a = (b&-b);
            //cout<<"b&-b = "<<a<<endl;
            d = floor(log(a)/log(2));
            c = ancestor[d][c];
            b -= a;
            //cout<<"ending loop with b = "<<b<<endl;
        }

        if(c == 0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }


}

