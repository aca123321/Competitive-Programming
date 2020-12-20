#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,j,t,a,b,c,flag;

    cin>>t;
    string s;
    vector<char> v;

    while(t--)
    {
        cin>>s;
        n = s.length();
        v.clear();
        v.pb(s[0]);
        for(i=1;i<n;i++)
        {
            if(s[i] == s[i-1])
            {
                if(s[i] == '0')
                {
                    v.pb('1');
                }
                else
                {
                    v.pb('0');
                }
            }
            v.pb(s[i]);
        }

        flag = 0;
        for(i=1;i<n;i++)
        {
            if(s[i] != s[i-1])
            {
                for(j=0;j<v.size();j++)
                {
                    cout<<v[j];
                }
                cout<<endl;
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            cout<<s<<endl;
        }
    }

}
