#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second
#define pb push_back

main()
{
    lli n,m,i,l,r,mini=INT_MAX;
    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>l>>r;
        mini = min(mini,(r-l+1));
    }

    cout<<mini<<endl;
    for(i=0;i<n;i++)
    {
        cout<<i%mini<<" ";
    }
}
