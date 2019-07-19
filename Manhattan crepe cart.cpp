#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli t,k,np,n,a,b,i,j,maxx,maxy,x,y;
    string s;
    char d;
    vector<lli> vx,vy;
    vector<pair<lli,lli>> posx,posy,pos;
    map<lli, lli> mx,my;
    map<pair<lli,lli>,lli> m;

    cin>>t;

    for(k=0;k<t;k++)
    {
        cin>>np>>n;
        s = "";
        maxx = INT_MIN;
        maxy = INT_MIN;
        mx.clear();
        my.clear();
        vx.clear();
        vy.clear();
        posx.clear();
        posy.clear();
        pos.clear();

        for(i=0;i<np;i++)
        {
            cin>>a>>b;
            cin>>d;
            vx.pb(a);
            vy.pb(b);
            s += d;
        }

        for(i=0;i<np;i++)
        {
            x = vx[i];
            y = vy[i];

            if(s[i] == 'N')
            {
                my[y+1]++;
                pos.pb({0,y+1});
                m[{0,y+1}]++;
            }
            else if(s[i] == 'S')
            {
                pos.pb({0,0});
                m[{0,0}]++;
            }
            else if(s[i] == 'E')
            {
                mx[x+1]++;
                pos.pb({x+1,0});
                m[{x+1,0}]++;
            }
            else
            {
                pos.pb({0,0});
                m[{0,0}]++;
            }
        }


        for(auto it: mx)
        {
            if(it.sec>maxx)
            {
                maxx = it.sec;
                x = it.f;
            }
        }
        if(maxx == INT_MIN)
        {
            x = 0;
        }

        for(auto it: my)
        {
            if(it.sec>maxy)
            {
                maxy = it.sec;
                y = it.f;
            }
        }
        if(maxy == INT_MIN)
        {
            y = 0;
        }

        cout<<"Case #"<<k+1<<": "<<x<<" "<<y<<endl;
    }
}
