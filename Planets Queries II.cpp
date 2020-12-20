#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli next_planet[200001], level[200001], comp[200001], vis[200001], timin[200001], timout[200001];

pair<lli, lli> dfs(lli cur, lli lvl, lli cur_comp) //returns the level and the component
{
    if(vis[cur] == 1)
    {
        return {level[cur], comp[cur]};
    }

    vis[cur] = 1;
    level[cur] = lvl;
    comp[cur] = cur_comp;

    pair<lli, lli> pll;
    pll = dfs(next_planet[cur], lvl+1, cur_comp);

    lli nlevel, ncomp; // nlevel is next node's level and ncomp is next node's component id
    nlevel = pll.f;
    ncomp = pll.sec;

    if(ncomp != cur_comp)
    {
        comp[cur] = ncomp;
        level[cur] = nlevel-1;
    }
    return {level[cur], comp[cur]};
}

main()
{
    lli n,i,t,a,b,c,count=0;

    cin>>n>>t;

    for(i=1;i<=n;i++)
    {
        cin>>a;
        next_planet[i] = a;
    }

    for(i=1;i<=n;i++)
    {
        if(vis[i] == 0)
        {
            count++;
            dfs(i, 1, count);
        }
    }

    cout<<"comp:\n";
    for(i=1;i<=n;i++)
    {
        cout<<i<<" -> "<<comp[i]<<endl;
    }
    cout<<endl;

    cout<<"level:\n";
    for(i=1;i<=n;i++)
    {
        cout<<i<<" -> "<<level[i]<<endl;
    }
    cout<<endl;

    while(t--)
    {
        cin>>a>>b;
        if(comp[a] != comp[b])
        {
            cout<<-1<<endl;
        }
        else
        {
            c = max(level[a],level[b]) - min(level[a], level[b]);
            cout<<c<<endl;
        }
    }

}
