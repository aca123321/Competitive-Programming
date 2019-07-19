#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli n,k,i,j,flag = 0;

    cin>>k;

    char c[100000];

    string s;

    cin>>s;
    n = s.length();

    if(n%k != 0)
    {
        cout<<-1;
        return 0;
    }

    string temp[(n/k)];

    map<char, pair < lli, char > > m;
    map<char, pair < lli, char > > :: iterator it;

    for(i=0;i<n;i++)
    {
        if((m.find(s[i])) == m.end())
        {
            m.insert(make_pair(s[i],make_pair(1,s[i])));
        }

        else
        {
            m[s[i]].first = m[s[i]].first + 1;
        }
    }

    for(it=m.begin();it != m.end();it++)
    {
        if((((it->second).first)%k) != 0)
        {
            flag++;
            break;
        }
    }

    if(flag != 0)
    {
        cout<<-1;
        return 0;
    }

    else
    {
        for(j=0;j<k;j++)
        {
            for(it = m.begin();it != m.end();it++)
        {
            for(i = 0;i<(((it->second).first)/k); i++)
            {
                cout<<m[it->first].second;
            }
        }
        }
    }
}
