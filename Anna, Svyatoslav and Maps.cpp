#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

vector<lli> graph[101];
vector<lli> path[101];
lli mat[101][101];

main()
{
    lli n,a,i,t,b,c,x,y,j,k;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a;
            mat[i][j] = a;
            if(a == 1)
            {
                graph[i].pb(j);
            }
        }
    }

    cin>>m;
    lli arr[m];

    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }



}

