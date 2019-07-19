#include<bits/stdc++.h>
using namespace std;

long long int power(long long int , long long int );

main()
{
    long long int n,k,i;

    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        if(((k - power(2,i))%(power(2,i+1))) == 0 )
        {
            cout<<i+1;
            break;
        }
    }
}

long long int power(long long int a, long long int b)
{
    long long int i,temp = a;

    for(i=0;i<b-1;i++)
    {
        a *= temp;
    }

    if(b == 0)
    {
        return 1;
    }

    return a;
}
