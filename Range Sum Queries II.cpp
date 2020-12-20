#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[600001], num;

void update(lli i, lli val)
{
    i += num;
    lli diff = val - arr[i];

    while(i != 0)
    {
        arr[i] += diff;
        i /= 2;
    }
}

lli sum(lli a, lli b)
{
    lli ret=0;
    a += num;
    b += num;

    while(a<=b)
    {
        if(a%2 != 0)
        {
            ret += arr[a];
            a++;
        }
        if(b%2 == 0)
        {
            ret += arr[b];
            b--;
        }
        a /= 2;
        b /= 2;
    }
    return ret;
}

int main()
{
    lli n,i,t,a,b,k, count;

    cin>>n>>t;

    num = round(pow(2,ceil(log(n)/log(2))));

    count = 0;
    for(i=num;count<n;i++)
    {
        cin>>arr[i];
        count++;
    }

    for(i=i;i<=(2*num)-1;i++)
    {
        arr[i] = 0;
    }

    for(i=num-1;i>=1;i--)
    {
        arr[i] = arr[2*i] + arr[(2*i)+1];
    }

    while(t--)
    {
        cin>>k>>a>>b;

        if(k == 1)
        {
            a--;
            update(a,b);
        }
        else
        {
            a--;
            b--;
            cout<<sum(a,b)<<endl;
        }
    }
}
