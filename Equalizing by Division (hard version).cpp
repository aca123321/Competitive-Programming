#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[200002];
lli n,k;
map<lli,lli> m;

lli f(lli x)
{
    lli i,j,a=0,b=0,c=0,count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=x && count<k)
        {
            a = arr[i];
            b = 0;
            while(a>x)
            {
                b++;
                a /= 2;
            }
            if(a == x)
            {
                count++;
                c += b;
            }
        }
        if(count >= k)
        {
            return (c);
        }
    }

    return -1;
}

lli bin_search(lli low, lli high)
{
    lli mid = (low+high)/2;
    lli a = f(mid),b=f(high);

    //cout<<mid<<" "<<a<<endl;
    //cout<<"f("<<mid<<") = "<<a<<endl;
    //cout<<"f("<<high<<") = "<<f(high)<<endl;

    if(b != -1)
    {
        return b;
    }

    if(low == high)
    {
        return (a);
    }
    else
    {
        if(mid == (high-1))
        {
            return a;
        }
        else if(a != -1)
        {
            return (bin_search(mid,high));
        }
        else
        {
            return (bin_search(low,mid-1));
        }
    }
}

main()
{
    lli i,a,t,j,b,c,x,y,maxi=INT_MIN,count;
    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        maxi = max(maxi,arr[i]);
        m[arr[i]]++;
    }
    sort(arr,arr+n);

    cout<<bin_search(0,maxi);
}
