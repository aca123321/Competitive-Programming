#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

main()
{
    lli n,i,t;

    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n%3 == 0)
        {
            cout<<"A\n";
        }
        else
        {
            cout<<"B\n";
        }
    }
}
