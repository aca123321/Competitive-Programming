#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

vector<pair<lli, pair<lli,lli>>> v;
lli start[200001],ending[200001], k;
map<lli, lli> m;

lli dp(lli x)
{
    if(ending[x] >= k)
    {
        //cout<<"ending not available for "<<x<<endl;
        return 0;
    }
    if(x < 0)
    {
        return 0;
    }
    return m[ending[x]];
}

lli bin_search(lli low, lli high)
{
    lli mid = (low+high)/2;
    //cout<<"searching for k = "<<k<<" , low,mid,high = "<<low<<", "<<mid<<", "<<high<<endl;

    if(low == high)
    {
        return mid;
    }
    if(low+1 == high)
    {
        if(ending[high] <  k)
        {
            return high;
        }
        return low;
    }

    if(ending[mid] < k)
    {
        return bin_search(mid, high);
    }
    else if(ending[mid] >= k)
    {
        return bin_search(low, mid-1);
    }
}

main()
{
    lli n,i,a,b,c,s,e,value,ind, maxi=INT_MIN;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>s>>e>>value;
        ending[i] = e;
        v.pb({e,{value,s}});
    }

    sort(v.begin(),v.end());
    sort(ending, ending+n);

    for(auto it: v)
    {
        s = (it.sec).sec;
        e = (it.f);
        value = (it.sec).f;
        m[e] = max(m[e],value);

        k = s;
        ind = bin_search(0,n-1);

        a = dp(ind)+value;
        k = e;
        b = dp(bin_search(0,n-1));

        //cout<<s<<", "<<e<<", "<<ind<<", "<<m[ending[ind]]<<endl;
        m[e] = max(a, max(m[e],b));
        //cout<<"m["<<e<<"] = "<<m[e]<<endl;
        maxi = max(m[e], maxi);
    }



    cout<<maxi;
}
