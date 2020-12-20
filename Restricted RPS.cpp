#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define f first
#define sec second

main()
{
    int n,i,a,t,j,k,b,c,na,nb,nc,ans;

    string s;
    cin>>t;
    vector<char> v;

    while(t--)
    {
        cin>>n;
        cin>>a>>b>>c;
        v.clear();

        na = a;
        nb = b;
        nc = c;
        ans = 0;

        cin>>s;

        for(i=0;i<n;i++)
        {
            if(s[i] == 'R')
            {
                if(b>0)
                {
                    v.pb('P');
                    b--;
                    ans++;
                }
                else
                {
                    v.pb('#');
                }
            }
            else if(s[i] == 'P')
            {
                if(c>0)
                {
                    v.pb('S');
                    c--;
                    ans++;
                }
                else
                {
                    v.pb('#');
                }
            }
            else
            {
                if(a>0)
                {
                    v.pb('R');
                    a--;
                    ans++;
                }
                else
                {
                    v.pb('#');
                }
            }
        }

        for(i=0;i<n;i++)
        {
            if(v[i] == '#')
            {
                if(s[i] == 'R')
                {
                    if(a>0)
                    {
                        v[i] = 'R';
                        a--;
                    }
                }
                else if(s[i] == 'P')
                {
                    if(b>0)
                    {
                        v[i] = 'P';
                        b--;
                    }
                }
                else
                {
                    if(c>0)
                    {
                        v[i] = 'S';
                        c--;
                    }
                }
            }
        }

        for(i=0;i<n;i++)
        {
            if(v[i] == '#')
            {
                if(s[i] == 'R')
                {
                    if(c>0)
                    {
                        v[i] = 'S';
                        c--;
                    }
                    else if(a>0)
                    {
                        v[i] = 'R';
                        a--;
                    }
                    else
                    {
                        v[i] = 'P';
                        b--;
                    }
                }
                else if(s[i] == 'P')
                {
                    if(a>0)
                    {
                        v[i] = 'R';
                        a--;
                    }
                    else if(b>0)
                    {
                        v[i] = 'P';
                        b--;
                    }
                    else
                    {
                        v[i] = 'S';
                        c--;
                    }
                }
                else
                {
                    if(b>0)
                    {
                        v[i] = 'P';
                        b--;
                    }
                    else if(c>0)
                    {
                        v[i] = 'S';
                        c--;
                    }
                    else
                    {
                        v[i] = 'R';
                        a--;
                    }
                }
            }
        }

        if(ans>=((n+1)/2))
        {
            cout<<"YES\n";
            for(i=0;i<v.size();i++)
            {
                cout<<v[i];
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO\n";
        }

    }

}

