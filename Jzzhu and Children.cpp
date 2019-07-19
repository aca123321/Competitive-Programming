#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,ans=0;
    double a,m,max=-1;

    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(ceil(a/m) >= max)
        {
            ans = i;
            max = (a/m);
        }
    }

    cout<<ans+1;
}
