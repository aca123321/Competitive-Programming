#include<iostream>
using namespace std;

main()
{
    long long int n,m,a;

    cin>>n>>m>>a;

    n = ((n%a == 0)?(n/a):(n/a)+1);
    m = ((m%a == 0)?(m/a):(m/a)+1);

    cout<<n*m;
}
