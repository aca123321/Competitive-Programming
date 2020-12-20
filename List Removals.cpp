#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli arr[530000], num, brr[200001], k;
map<lli, lli> m;

void update(lli i, lli val)
{
    i += num;
    arr[i] = val;
    i /= 2;
    while(i != 0)
    {
        arr[i] = arr[2*i] + arr[(2*i)+1];
        i /= 2;
    }
}

lli sum(lli a, lli b)
{
    a += num;
    b += num;
    lli ret = 0;

    while(a <= b)
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

lli bin_search(lli start, lli end)
{
    if(start+1 == end)
    {
        if(sum(0,start) == k)
        {
            return start;
        }
        else if(sum(0,end) == k)
        {
            return end;
        }
        else
        {
            return -1;
        }
    }

    if(start == end)
    {
        return start;
    }

    lli a, mid = (start+end)/2;

    if(sum(0,mid) >= k)
    {
        a = bin_search(start, mid);
    }
    else
    {
        a = bin_search(mid+1, end);
    }
    return a;
}

int main()
{
    lli n,i,t,j,a,b,count=0;

    cin>>n;
    num = round(pow(2,ceil(log(n)/log(2))));

    // occurence/presence of ith number is denoted by a 1 at ith position (ie. arr[i] = 1)
    count = 0;
    for(i=num;count<n;i++)
    {
        cin>>a;
        m[i-num] = a;
        arr[i] = 1;
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

    for(i=0;i<n;i++)
    {
        cin>>brr[i];
    }

    for(i=0;i<n;i++)
    {
        k = brr[i];
        a = bin_search(0,n-1);
        cout<<m[a]<<" ";
        update(a, 0);
    }

}
