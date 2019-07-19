#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first

main()
{
    lli n,i,j,a,b,c,count=0,p,q,x,y;
    cin>>n;
    lli extral=0,extrar=0,extra[27]={0};
    string l,r;
    map<char, lli> ml,mr;
    vector<lli> vl[27],vr[27];
    vector<pair<lli,lli>> vans, vextra[27];
    pair<lli,lli> temp;

    cin>>l;
    cin>>r;

    for(i=0;i<n;i++)
    {
        if(l[i] == '?')
        {
            l[i] = '{';
        }

        if(r[i] == '?')
        {
            r[i] = '{';
        }

        ml[l[i]]++;
        vl[int(l[i])-97].pb(i+1);

        mr[r[i]]++;
        vr[int(r[i])-97].pb(i+1);
    }

    for(i=0;i<27;i++)
    {
        a = (min(vl[i].size(),vr[i].size()));
        b = (max(vl[i].size(),vr[i].size()));

        for(j=0;j<a;j++)
        {
            temp = make_pair(vl[i][j],vr[i][j]);
            vans.pb(temp);
            count++;
        }

        if(a == vl[i].size())
        {
            extrar += b-a;
            extra[i] = 1;
        }
        else
        {
            extral += b-a;
        }
    }

    p = extral;
    x = vl[26].size();
    q = extrar;
    y = vr[26].size();

    c = 0;
    if(extra[26] == 0)
    {
        c += min(x,q);
    }
    else
    {
        c += min(y,p);
    }

    count += c;

    lli t = 0;

    if(extra[26] == 0)
    {
        while(t != c)
        {
            for(i=0;i<26;i++)
            {
                if(extra[i] == 1)
                {
                    for(j=0;j<vr[i].size() && t<c;j++)
                    {
                        temp = make_pair(vl[26][x-y+t],vr[i][j]);
                        vans.pb(temp);
                        t++;
                    }
                }
            }
        }
    }

    else
    {
        while(t != c)
        {
            for(i=0;i<26;i++)
            {
                if(extra[i] == 0)
                {
                    for(j=0;j<vl[i].size() && t<c;j++)
                    {
                        temp = make_pair(vr[26][y-x+t],vl[i][j]);
                        vans.pb(temp);
                        t++;
                    }
                }
            }
        }
    }

    cout<<count<<endl;

    for(auto it: vans)
    {
        cout<<it.f<<" "<<it.second<<endl;
    }

/*

    if(c == a)
    {
        for(i=0;i<a;i++)
        {

        }
    }







    for(auto it: ml)
    {
        cout<<it.f<<" "<<it.s<<endl;
    }
    cout<<endl;

    for(auto it: mr)
    {
        cout<<it.f<<" "<<it.s<<endl;
    }
    cout<<endl;
*/

}
