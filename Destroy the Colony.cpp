#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb(x) push_back(x)

struct info
{
    lli tot=0,fir=0,sec=0;
};

main()
{
    lli n,i,x,y,q,num=0;
    string s,t="";
    info inf;

    cin>>s;
    n = s.length();
    cin>>q;
    t = "#" + s;

    map < char , info > m;
    map < char , info > :: iterator it;

    for(i=0;i<n;i++)
    {
        if(m.find(s[i]) == m.end())
        {
            if(i < n/2)
            {
                inf.fir = 1;
                inf.sec = 0;
                inf.tot = 1;
                m.insert({s[i],inf});
            }

            else
            {
                inf.fir = 0;
                inf.sec = 1;
                inf.tot = 1;
                m.insert({s[i],inf});
            }

            num++;
        }

        else
        {
            if(i < n/2)
            {
                m[s[i]].fir = (m[s[i]].fir) + 1;
                m[s[i]].tot = (m[s[i]].tot) + 1;
            }

            else
            {
                m[s[i]].sec = (m[s[i]].sec) + 1;
                m[s[i]].tot = (m[s[i]].tot) + 1;
            }
        }
    }

    vector<pair<char,lli>> v;
    i = 0;

    for(it = m.begin(); it != m.end() ; it++)
    {
        v.push_back({(it->first),((it->second).tot)});
        cout<<v[i].first<<" "<<v[i].second<<endl;
        i++;
    }

    while(q--)
    {
        cin>>x>>y;


    }
}
