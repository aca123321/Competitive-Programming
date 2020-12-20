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
    if(i > (2*num)-1)
    {
        return ;
    }

    while(i != 0)
    {
        arr[i] += val;
        i /= 2;
    }
}

void increase(lli a, lli b, lli val)
{
    update(a,val);
    update(b+1, -val);
}

lli sum(lli b)
{
    lli a = num;
    b += num;
    lli ret = 0;

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
        a/=2;
        b/=2;
    }
    return ret;
}

int main()
{
    lli n,i,t,a,b,val,count,k;

    cin>>n>>t;

    num = round(pow(2,ceil(log(n)/log(2))));

    count = 0;
    a = 0;
    for(i=num;count<n;i++)
    {
        cin>>arr[i];
        if(i != num)
        {
            arr[i] -= a;
        }
        a += arr[i];
        count++;
    }

    arr[i] = -a;
    i++;
    for(i=i;i<=(2*num)-1;i++)
    {
        arr[i] = 0;
    }

    for(i = num-1;i>=1;i--)
    {
        arr[i] = arr[2*i] + arr[(2*i)+1];
    }

    while(t--)
    {
        cin>>k>>a;

        if(k == 1)
        {
            cin>>b>>val;
            a--;
            b--;
            increase(a,b,val);
        }
        else
        {
            a--;
            cout<<sum(a)<<endl;
        }
    }
}
