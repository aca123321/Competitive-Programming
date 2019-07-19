#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,flag = 0,c=0;
    string s;

    cin>>n;

    stringstream ss;

    ss<<n;
    s = ss.str();
    n = s.length();

    if(s[0] != '1')
    {
        cout<<"NO";
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(s[i] == '1')
        {
            c = 0;
        }

        else if(s[i] == '4')
        {
            c++;
        }

        else
        {
            flag++;
        }

        if(c>=3)
        {
            flag++;
        }
    }

    if(flag == 0)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }
}
