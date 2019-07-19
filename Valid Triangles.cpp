#include<iostream>
using namespace std;

main()
{
    int t,a,i,sum;

    cin>>t;

    while(t--)
    {
        sum =0;
        for(i=0;i<3;i++)
        {
            cin>>a;
            sum += a;
        }
        cout<<((sum==180)?("YES\n"):("NO\n"));
    }
}
