#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

vector<vector<lli>> sub(vector<lli> &v)
{
    lli n,i,a;
    vector<vector<lli>> ret,rec;
    vector<lli> send;
    n = v.size();

    if(n == 1)
    {
        vector<lli> temp;
        temp.pb(v[0]);
        ret.pb(temp);
        temp.clear();
        ret.pb(temp);
        return ret;
    }
    for(i=1;i<n;i++)
    {
        send.pb(v[i]);
    }
    rec = sub(send);
    for(i=0;i<rec.size();i++)
    {
        ret.pb(rec[i]);
        rec[i].pb(v[0]);
        ret.pb(rec[i]);
    }
    return ret;
}

main()
{
    lli n,i,a,b,c,j;

    cin>>n;
    vector<lli> v;
    vector<vector<lli>> ans;
    map<vector<lli>, lli> m;

    for(i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
    }
    ans = sub(v);

    for(i=0;i<ans.size();i++)
    {
        m[ans[i]]++;
    }
    cout<<"There are "<<m.size()<<" subsets of the given set\n";
    for(auto iit: m)
    {
        for(auto it: iit.first)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
