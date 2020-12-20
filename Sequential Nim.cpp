#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[100001];

bool win(lli cur, lli last)
{
    if(cur == last)
    {
        return true;
    }
    if(arr[cur] == 1)
    {
        return !win(cur+1, last);
    }
    else
    {
        return true;
    }
}

main()
{
    lli n,i,t,a,b,c,j,k;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        if(win(0,n-1))
        {
            cout<<"First\n";
        }
        else
        {
            cout<<"Second\n";
        }
    }

}
