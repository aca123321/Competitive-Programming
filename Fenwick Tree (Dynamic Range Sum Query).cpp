#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

// (k & -k) is the first power of 2 which is available in k. eg. For 7 the series is: 1,2 and 4. For 13, the series is: 1,4 and 8
// This is because negative of a number is the first available bit from right remaining the same and all the bits to the left of it complemented.

lli arr[10000], ft[10000], n; // ft is the fenwick tree and arr is the original array

lli sum(lli ind) // returns sum from 1 to ind
{
    if(ind <= 0)
    {
        return 0;
    }

    lli ret = 0;
    while(ind >= 1)
    {
        ret += ft[ind];
        ind -= (ind & -ind);
    }
    return ret;
}

void update(lli ind, lli val)
{
    val -= arr[ind];
    arr[ind] += val;

    while(ind <= n)
    {
        ft[ind] += val;
        ind += (ind & -ind);
    }
}

void initialise()
{
    lli i, ind;

    for(i=1;i<=n;i++)
    {
        ind = i;
        while(ind<=n)
        {
            ft[ind] += arr[i];
            ind += (ind & -ind);
        }
    }
}

main()
{
    lli i,j;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        ft[i] = 0;
    }

    initialise();

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<"sum("<<i<<", "<<j<<") = "<<sum(j)-sum(i-1)<<endl;
        }
    }

    update(2, 5);
    update(4, 1);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<"sum("<<i<<", "<<j<<") = "<<sum(j)-sum(i-1)<<endl;
        }
    }

}
