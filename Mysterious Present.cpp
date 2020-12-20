#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

int main()
{
    lli n,i,j,a,b,w,h;
    map<lli, lli> m;
    map<pair<lli,lli>,lli> id;
    vector<pair<lli,lli>> v;
    vector<lli> ans;

    cin>>n>>w>>h;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        id[{a,b}] = i+1;
        if(a>w && b>h)
        {
            v.pb({a,b});
        }
    }

    sort(v.rbegin(),v.rend());

    if(v.size() == 0)
    {
        cout<<"0";
        return 0;
    }

    lli maxiw=0,maxih=0;

    if(v[0].f>w && v[0].sec>h)
    {
        maxiw = v[0].f;
        maxih = v[0].sec;
        m[v[0].f] = v[0].sec;
    }

    for(i=1;i<v.size();i++)
    {
        if(v[i].f>w && v[i].sec>h)
        {
            if(m[v[i].f] == 0)
            {
                if(v[i].f<maxiw && v[i].sec<maxih)
                {
                    m[v[i].f] = v[i].sec;
                    maxiw = v[i].f;
                    maxih = v[i].sec;
                }
            }
        }
    }

    cout<<m.size()<<endl;
    for(auto it: m)
    {
     //   cout<<"{"<<it.f<<","<<it.sec<<"}"<<endl;
        ans.pb(id[{it.f,it.sec}]);
    }

    //reverse(ans.begin(),ans.end());

    for(auto iit: ans)
    {
        cout<<iit<<" ";
    }

}
