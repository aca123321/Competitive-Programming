#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,c,j,k,x,y,l,r,d;

    cin>>t;
    string s;
    stringstream obj;
    unordered_map<char, lli> m;

    for(i=0;i<10;i++)
    {
        m[char(48+i)] = i;
    }

    while(t--)
    {
        cin>>s;
        cin>>k;
        obj.clear();
        obj<<s;
        obj>>x;
        s = '0' + s;
        n = s.length();

        a = 0;
        j = 0;
        for(i=0;i<n;i++)
        {
            if(m[s[i]] + a < k)
            {
                j++;
            }
        }

        b =

    }


}
