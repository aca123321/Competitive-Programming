#include<iostream>
using namespace std;

main()
{
    int t,n;
    long long int fact;

    cin>>t;

    while(t--)
    {
        fact = 1;
        cin>>n;

        while(n)
        {
            fact *= n ;
            n--;
        }

        cout<<fact<<endl;
    }
}
