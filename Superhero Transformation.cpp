#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second
#define pb(x) push_back(x)

int main()
{
    lli n,i,flag = 0;
    string s,t;

    cin>>s;
    cin>>t;

    n = s.length();


    if(s.length() != t.length())
    {
        cout<<"No";
        return 0;
    }

    else
    {
        for(i=0;i<n;i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u' )
                {
                    continue;
                }

                else
                {
                    cout<<"No";
                    flag = 1;
                    break;
                }
            }

            else
            {
                if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u' )
                {
                    cout<<"No";
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 0)
        {
            cout<<"Yes";
        }
    }



}
