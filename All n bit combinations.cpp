#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec  second

lli ind=1,k;
string sarr = "01234";

void solve(lli n, string s)
{
    lli i;
    if(n == 0)
    {
        return ;
    }
    if(n == 1)
    {
        for(i=0;i<k;i++)
        {
            cout<<ind++<<") "<<s<<sarr[i]<<endl;
        }
    }
    else
    {
        for(i=0;i<k;i++)
        {
            solve(n-1,s+sarr[i]);
        }
    }
}

main()
{
    lli n;

    cin>>n;
    k = sarr.length();
    solve(n,"");
}
