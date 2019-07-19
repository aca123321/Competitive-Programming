#include<iostream>
using namespace std;

main()
{
    int t,sum;
    long long int n;

    cin>>t;

    while(t--)
    {
        cin>>n;
        sum = 0;

        while(n)
        {
            sum += n%10;
            n /= 10;
        }

        cout<<sum<<endl;
    }
}
