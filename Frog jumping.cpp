#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,n,i,a,b,k;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>k;

        n = (k/2)*(a-b);

        if(k%2 == 0)
        {
            cout<<n<<endl;
        }

        else
        {
            cout<<n+a<<endl;
        }
    }
}
