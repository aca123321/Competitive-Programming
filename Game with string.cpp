#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,count=0;
    string s,t;

    cin>>s;
    n = s.length();

    stack <char> st;

    for(i=0;i<n;i++)
    {
        if(!(st.empty()))
        {
            if(st.top() == s[i])
            {
                st.pop();
                count++;
            }

            else
            {
                st.push(s[i]);
            }
        }

        else
        {
            st.push(s[i]);
        }
    }

    if(count%2 == 0)
    {
        cout<<"No";
    }

    else
    {
        cout<<"Yes";
    }
}
