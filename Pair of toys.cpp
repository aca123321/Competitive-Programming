#include<iostream>
using namespace std;

main()
{
    long long int n,k;

    cin>>n>>k;

    if((k/2) >= n)
    {
        cout<<"0";
    }

    else
    {
        if(k > n)
        {
            cout<<(n - (k/2));
        }

        else
        {
            cout<<(k-1)/2;
        }
    }
}
