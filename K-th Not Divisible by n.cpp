#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli a,t,b,c,n,k;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        a = k/(n-1);
        b = k%(n-1);
        c = ((a*n)+b);
        if(b == 0)
        {
            c--;
        }
        cout<<c<<endl;
    }
}
