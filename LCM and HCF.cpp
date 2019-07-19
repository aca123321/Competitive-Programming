#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int, long long int);

main()
{
    int t;
    long long int a,b;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        cout<<gcd(a,b)<<" "<<(gcd(a,b)*(a/gcd(a,b))*(b/gcd(a,b)))<<endl;
    }
}

long long int gcd(long long int a, long long int b)
{
    if(b==0)
    {
        return a;
    }
    return(gcd(b,a%b));
}
