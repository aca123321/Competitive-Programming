#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli len;

vector<string> generateAllPermutations(string s, char last)
{
    lli n,i,j;
    string t;
    n = s.length();
    vector<string> ret,rec;

    if(n == 0)
    {
        s += last;
        ret.pb(s);
    }
    else if(n < len)
    {
        t = "";
        for(i=0;i<n-1;i++)
        {
            t += s[i];
        }
        rec = generateAllPermutations(t,s[n-1]);
        for(auto s: rec)
        {
         //   cout<<s<<endl;
            for(i=0;i<=n;i++)
            {
                t = "";
                for(j=0;j<n;j++)
                {
                    if(j == i)
                    {
                        t += last;
                        t += s[j];
                    }
                    else
                    {
                        t += s[j];
                    }
                }
                if(i == n)
                {
                    t += last;
                }
                ret.pb(t);
            }
        }
    }

    return ret;
}

main()
{
    lli i;
    string s,t;
    vector<string> v;
    cin>>s;
    len = s.length();

    t = "";
    for(i=0;i<len-1;i++)
    {
        t += s[i];
    }
    v = generateAllPermutations(t,s[len-1]);

    cout<<v.size()<<" possible permuatations:\n";
    for(auto s: v)
    {
        cout<<s<<endl;
    }
}
