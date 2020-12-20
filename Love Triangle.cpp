#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

vector<lli> g[5001];

int main()
{
    lli n,i,a,b;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        g[i+1].pb(a);
    }
    a = 0;
    for(i=1;i<=n;i++)
    {
        if( g[g[g[i][0]][0]][0] == i )
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}

