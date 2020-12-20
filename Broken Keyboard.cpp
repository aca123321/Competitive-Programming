#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,b,k,j;
    map<char,lli> m;
    cin>>t;
    string s;
    char c;

    while(t--)
    {
        cin>>s;
        n = s.length();
        a = 1;
        m.clear();
        if((n>1 && s[1]!=s[0])||(n == 1))
        {
            m[s[0]]++;
        }
        i = 1;
        while(i<n)
        {
            if(s[i] == s[i-1])
            {
                a++;
            }
            else
            {
                if(a%2 != 0)
                {
                    m[s[i-1]]++;
                }
                a=1;
            }
            i++;
        }
        if(a%2 != 0)
        {
            m[s[i-1]]++;
        }

        for(auto it:m)
        {
            cout<<it.f;
        }
        cout<<endl;

    }


}
