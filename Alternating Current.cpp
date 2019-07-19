#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i;

    string s;

    cin>>s;
    n = s.length();

    stack <char> st;

    for(i=0;i<n;i++)
    {
        if(!st.empty() && st.top()==s[i])
        {
            st.pop();
        }

        else
        {
            st.push(s[i]);
        }
    }

    if(st.empty())
    {
        cout<<"Yes";
    }

    else
    {
        cout<<"No";
    }
}
