#include<iostream>
#include<string>
using namespace std;

main()
{
    long int n,m,i,ast=-1,flag=0,ns,nt;
    string s,t;

    cin>>n>>m;
    cin>>s>>t;

    ns = s.length();
    nt = t.length();

    if(ns>nt+1)
    {
        cout<<"NO";
    }

    else
    {
        for(i=0;i<ns;i++)  //finds index of asterix if present
        {
            if(s[i] == '*')
            {
                ast = i;
                break;
            }
        }

        if(ast == -1) // asterix not present
        {
            for(i=0;i<ns;i++)
            {
                if(s[i] != t[i])
                {
                    flag = 1;
                    break;
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

        else // asterix present at index ast
        {
            flag = 0;

            for(i=0;i<ast;i++)
            {
                if(s[i] != t[i])
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 1) // sequence before asterix in string s doesn't correspond to the one in string t.
            {
                cout<<"NO";
            }

            else
            {
                for(i=0;i<ns-ast-1;i++)
                {
                    if((s[ns-i]) != (t[nt-i]))
                    {
                        flag = 1;
                        break;
                    }
                }

                if(flag == 1)
                {
                    cout<<"NO";
                }

                else
                {
                    cout<<"YES";
                }
            }
        }
    }
}
