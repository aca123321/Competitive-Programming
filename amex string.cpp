#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli arr[3],n,i,flag=0,a,b,c;

    string s="";
    char pre;
    vector<pair<lli,char>> v;

    cin>>a>>b>>c;
    v.pb({a,'a'});
    v.pb({b,'b'});
    v.pb({c,'c'});

    sort(v.begin(),v.end());

    a = (2<=v[2].f)?2:v[2].f;

    for(i=0;i<a;i++)
    {
        s += v[2].sec;
    }
    v[2].f -= a;
    pre = s[s.length()-1];

    while(1)
    {
        sort(v.begin(),v.end());

        a = (2<=v[2].f)?2:v[2].f;

        if(v[2].sec == pre)
        {
            if(v[1].f > 0)
            {
                s += v[1].sec;
                v[1].f -= 1;
            }
            else
            {
                break;
            }
        }

        for(i=0;i<a;i++)
        {
            s += v[2].sec;
        }
        v[2].f -= a;

        pre = s[s.length()-1];

        if(v[0].f == 0 && v[1].f == 0 && v[2].f == 0)
        {
            break;
        }

        if(v[2].f >= 3 && v[1].f == 0 && v[0].f == 0)
        {
            break;
        }
    }

    cout<<s;
}
