#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int t,n,i,a,b;

    cin>>t;

    while(t--)
    {
        cin>>n;

        a = 1;
        b = 2;

        for(i=1;i<n;i++)
        {
            if(i%2 != 0)
            {
                a = (a*2) - 1;
            }

            else
            {
                a = (a*2) + 1;
            }

            b = b*2;
        }

        cout<<a<<" "<<b<<" ";
    }
}
