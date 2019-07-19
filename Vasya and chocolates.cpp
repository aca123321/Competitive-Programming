#include<iostream>
using namespace std;

main()
{
    long long int t,n,s,c,a,b;

    cin>>t;

    while(t--)
    {
        cin>>s>>a>>b>>c;

        cout<<(s/c)+(((s/c))/a)*b<<endl;
    }
}
