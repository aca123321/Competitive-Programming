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

        if(n<=30)
        {
            cout<<"NO\n";
        }
        else if(n == 36)
        {
            cout<<"YES\n5 6 10 15\n";
        }
        else if(n == 40)
        {
            cout<<"YES\n5 6 14 15\n";
        }
        else if(n == 44)
        {
            cout<<"YES\n5 10 14 15\n";
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<"6 10 14 "<<n-30<<endl;
        }

    }


}
