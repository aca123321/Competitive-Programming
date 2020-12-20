#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

struct pairs
{
    lli first = 0;
    lli second = 0;
};

main()
{
    lli n,i,a,t,b,c,j,k;

    cin>>t;
    string s;

    map<string,pairs> m;

    while(t--)
    {
        cin>>n;
        m.clear();

        for(i=0;i<n;i++)
        {
            cin>>s;
            cin>>a;
            if(a == 0)
            {
                m[s].f += 1;
            }
            else
            {
                m[s].sec += 1;
            }
        }
        a = 0;
        for(auto it:m)
        {
            a += max((it.sec).f, (it.sec).sec);
        }

        cout<<a<<endl;
    }

}
