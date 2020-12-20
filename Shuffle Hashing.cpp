#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    lli n,i,j,k,x,y,c,flag;

    map<char,lli> ms,mt;
    cin>>k;
    string s,t;

    while(k--)
    {
        cin>>s;
        cin>>t;
        n = s.length();
        ms.clear();

        for(i=0;i<n;i++)
        {
            ms[s[i]]++;
        }

        flag = 0;

        for(i=0;i<=t.length()-n;i++)
        {
            mt.clear();
            for(j=0;j<n;j++)
            {
                mt[t[i+j]]++;
            }
            flag = 0;
            for(j=0;j<26;j++)
            {
                //cout<<char('a'+j)<<" -> "<<ms['a'+j]<<" and "<<mt['a'+j]<<endl;

                if(ms['a'+j] != mt['a'+j])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                break;
            }
        }
        if(n>t.length())
        {
            flag = 1;
        }

        if(flag == 1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }

    }

}
