#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int t,n,bits,nibbles,bytes,interval,overflow;

    cin>>t;

    while(t--)
    {
        cin>>n;

        bits = 1;
        nibbles = bytes = 0;

        interval = ((n-1)/26);
        overflow = (n-1)%26;

        if(0 <= overflow && overflow < 2)
        {
            bits = pow(2,interval);
        }

        else if(2 <= overflow && overflow < 10)
        {
            nibbles = pow(2,interval);
            bits = 0;
        }

        else
        {
            bytes = pow(2,interval);
            bits = 0;
        }

        cout<<bits<<" "<<nibbles<<" "<<bytes<<endl;
    }
}
