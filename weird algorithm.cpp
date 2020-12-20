#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i;

    cin>>n;

    while( n != 1)
    {
        cout<<n<<" ";
        if(n%2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (3*n) + 1;
        }
    }
    cout<<n<<endl;

}
