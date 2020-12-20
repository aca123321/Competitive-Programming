#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,j,a,b,c,l;

    cin>>t;
    vector<pair<string,lli>> v;
    map<char,lli> m;
    string s;

    for(l=0;l<t;l++)
    {
        cin>>n;
        v.clear();
        cin.get();

        for(i=0;i<n;i++)
        {
            s = "";
            getline(cin, s);
            cout<<"string is "<<s<<endl;
            v.pb({s,0});
            m.clear();
            for(j=0;j<s.length();j++)
            {
                if(s[j] != ' ')
                {
                    m[s[j]]++;
                }
            }
            cout<<m.size()<<endl;
            v[i].sec = m.size();
        }

        sort(v.end(),v.begin());

        cout<<"Case #"<<l+1<<": "<<v[0].f<<endl;
    }
}

