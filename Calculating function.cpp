#include<iostream>
using namespace std;

main()
{
    long long n;

    cin>>n;

    if(n%2 == 0)
    {
        cout<<(n/2);
    }

    else
        cout<<(-1)*((n+1)/2);
}
