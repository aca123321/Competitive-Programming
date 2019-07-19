#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first

main()
{
    lli n,i,t,j,a,b,flag;
    string s;
    lli arr[26] = {0};
    vector<char> ve,vo,vans,vanser;

    cin>>t;

    while(t--)
    {
        cin>>s;
        n = s.length();
        ve.clear();
        vo.clear();
        vans.clear();
        vanser.clear();
        flag = 1;

        for(i=0;i<n;i++)
        {
            arr[int(s[i]) - int('a')]++;
            if((int(s[i]) - int('a'))%2 == 0)
            {
                ve.pb(s[i]);
            }
            else
            {
                vo.pb(s[i]);
            }
        }

        sort(ve.begin(),ve.end());
        sort(vo.begin(),vo.end());

        for(auto it: ve)
        {
            vans.pb(it);
        }
        for(auto it: vo)
        {
            vans.pb(it);
        }

        for(auto it: vo)
        {
            vanser.pb(it);
        }
        for(auto it: ve)
        {
            vanser.pb(it);
        }

        for(i=0;i<vans.size()-1;i++)
        {
            if(abs( int(vans[i+1]) - int(vans[i]) ) == 1)
            {
                flag = 2;
            }
        }

        if(flag == 2)
        {
            for(i=0;i<vanser.size()-1;i++)
            {
                if(abs( int(vanser[i+1]) - int(vanser[i]) ) == 1)
                {
                    flag = -1;
                }
            }
        }

        if(flag == -1)
        {
            cout<<"No answer";
        }
        else if(flag == 1)
        {
            for(auto it: vans)
            {
                cout<<it;
            }
        }
        else if(flag == 2)
        {
            for(auto it: vanser)
            {
                cout<<it;
            }
        }
        cout<<endl;
    }
}
