#include<bits/stdc++.h>
using namespace std;

#define lli unsigned long long int

lli ans(lli n)
{
    lli i,sum=1;

    for(i=n-1;i>=1;i--)
    {
        sum *= (i+1);
        sum += i;
    }

    return sum;
}

main()
{
    lli t,n,k,i;

    cin>>t;
    lli arr[t];
    k = t;

    for(k=0;k<t;k++)
    {
        cin>>n;
        arr[k] = ans(n);
    }

    for(i=0;i<t;i++)
    {
        cout<<arr[i];
        if(i != (t-1))
        {
            cout<<endl;
        }
    }
}
