#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

vector<lli> v, perm;
lli chosen[10001];

void search()
{
    lli n=v.size(),i;
    if(perm.size() == n)
    {
        for(auto it: perm)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }

    for(i=0;i<v.size();i++)
    {
        if(chosen[i] == 1)
        {
            continue;
        }
        chosen[i] = 1;
        perm.pb(v[i]);
        search();
        chosen[i] = 0;
        perm.pop_back();
    }
}

main()
{
    lli n,i,a,b,c;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
        chosen[i] = 0;
    }
    search();
}
