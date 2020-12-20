#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[600001], num;

lli sum(lli a, lli b)
{
    lli ret = 0;
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
    lli n,t,i,j,a,b,count;

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
        cin>>a>>b;
        a--;
        b--;
        cout<<sum(a,b)<<endl;
    }


}
