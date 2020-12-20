#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,c,j,k;

    cin>>t;

    while(t--)
    {
        cin>>n;

        a = ceil((float(n)/float(4)));

        for(i=0;i<n-a;i++)
        {
            cout<<9;
        }
        for(i=0;i<a;i++)
        {
            cout<<8;
        }
        cout<<endl;

    }


}
