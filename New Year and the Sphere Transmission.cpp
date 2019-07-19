#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli fun(lli n, lli k)
{
    lli sum = 1,x=1,arr[n+1]={0};

    arr[1] = 1;

    if(k == (1))
    {
        return ((n)*(n+1))/2 ;
    }

    // last multiple of

    do
    {
        x = (x+k)%(n);
        if(arr[x] == 0)
        {
            arr[x] = 1;
            sum += x;
        }
    }
    while(x != 1);

    return sum;
}

main()
{
    set<lli> s;

    lli n,k,i,sum=0;

    s.insert(1);

    cin>>n;

    for(i=1;i<=(n/2);i++)
    {
        sum = fun(n,i);
        s.insert(sum);
    }

    for(auto i: s)
    {
        cout<<i<<" ";
    }
}
