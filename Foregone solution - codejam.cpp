#include<bits/stdc++.h>
using namespace std;

#define lli long long int

string rep3(string s)
{
    lli i;

    for(i=0;i<s.length();i++)
    {
        if(s[i] == '4')
        {
            s[i] = '3';
        }
    }

    return s;
}

string rep5(string s)
{
    lli i;

    for(i=0;i<s.length();i++)
    {
        if(s[i] == '4')
        {
            s[i] = '5';
        }
    }

    return s;
}

main()
{
    lli i,t,n,a,b,k;
    stringstream ss;
    string s,temp;
    cin>>t;

    for(k=0;k<t;k++)
    {
        ss.clear();
        cin>>s;
        ss<<s;
        ss>>n;
        a = n/2;
        b = n-a;
        ss.clear();
        ss<<a;
        ss>>s;
        ss.clear();
        ss<<b;
        ss>>temp;

        if(a != b)
        {
            for(i=0;i<s.length();i++)
            {
                if(s[i] == '4')
                {
                    if(temp[i] == '4')
                    {
                        s[i] = '3';
                        temp[i] = '5';
                    }
                    else
                    {
                        if(temp[i] == '3')
                        {
                            s[i] = '2';
                            temp[i] = '5';
                        }
                        else if(temp[i] == '5')
                        {
                            s[i] = '3';
                            temp[i] = '6';
                        }
                    }
                }

                else if(temp[i] == '4')
                {
                    if(s[i] == '3')
                    {
                        s[i] = '2';
                        temp[i] = '5';
                    }

                    else if(s[i] == '5')
                    {
                        s[i] = '3';
                        temp[i] = '6';
                    }
                }
            }
        }
        else
        {
            temp = rep5(s);
            s = rep3(s);
        }

        cout<<"Case #"<<k+1<<": "<<temp<<" "<<s;
        if(k != (t-1))
        {
            cout<<endl;
        }
    }
}
