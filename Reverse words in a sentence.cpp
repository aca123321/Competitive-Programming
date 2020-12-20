#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,n,t,j,a,b;
    string s;
    stack<char> st;

    cin>>t; // number of sentences
    getchar();

    while(t--)
    {
        getline(cin,s);
        cout<<"original string:#"<<s<<"#\n";
        n = s.length();
        for(i=n-1;i>=0;i--)
        {
            if(s[i] != ' ')
            {
                st.push(s[i]);
                if(i == 0)
                {
                    while(!st.empty())
                    {
                        cout<<st.top();
                        st.pop();
                    }
                }
            }
            else
            {
                while(!st.empty())
                {
                    cout<<st.top();
                    st.pop();
                }
                cout<<" ";
            }
        }
        cout<<endl;
    }




}
