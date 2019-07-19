#include<iostream>
using namespace std;

main()
{
    long long int t,n,m,i;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n>>m;

        if((n+m) >= 3)
        {
            cout<<"1.0000000000";
        }

        else
        {
            cout<<"0.0000000000";
        }
    }
}
