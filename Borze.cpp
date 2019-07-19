#include<bits/stdc++.h>
using namespace std;

main()
{
    int i;

    string s;

    cin>>s;

    i = 0;

    while(i<s.length())
    {
        if(s[i] == '.')
        {
            cout<<0;
            i++;
        }

        else
        {
            if(s[i+1] == '.')
            {
                cout<<1;
            }

            else
            {
                cout<<2;
            }

            i += 2;
        }
    }
}
