#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

lli arr[1000001][2];

main()
{
    lli n,i,t,a,b,c,flag,mini;

    string s;
    vector<lli> v;

    vector<lli>::iterator it;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>s;

        v.clear();

        if(s[0] == '0')
        {
            arr[0][0] = 1;
            arr[0][1] = 0;
        }
        else
        {
            arr[0][0] = 0;
            arr[0][1] = 1;
        }

        for(i=1;i<n;i++)
        {
            if(s[i] == '0')
            {
                arr[i][0] = arr[i-1][0] + 1;
                arr[i][1] = arr[i-1][1];
            }
            else
            {
                arr[i][1] = arr[i-1][1] + 1;
                arr[i][0] = arr[i-1][0];
            }
        }

        if(arr[n-1][0] != arr[n-1][1])
        {
            cout<<-1<<endl;
        }
        else
        {
            i = 0;

            while(i<n)
            {
                a = 1;
                while(s[i+1] == s[i])
                {
                    a++;
                    i++;
                }
                v.pb(a);
                i++;
                if(i == n-1)
                {
                    if(a >= 1)
                    {
                        v.pb(a);
                    }
                }
            }
        }

        c = 0;
        flag = 0;
        while(flag == 0)
        {
            flag = 1;
            mini = INT_MAX;
            for(i=0;i<v.size();i++)
            {
                if(v[i] != 0)
                {
                    mini = min(mini, v[i]);
                }
            }
            flag = 1;
            for(i=0;i<v.size();i++)
            {
                if(v[i] != 0)
                {
                    v[i] -= mini;
                    flag = 0;
                }
            }
            /*
            for(it = v.begin();it!=v.end();it++)
            {
                if(*it == mini)
                {
                    v.erase(it);
                }
                else
                {
                    *it = (*it)-mini;
                    flag = 0;
                }
            }
            */

            if(mini != INT_MAX)
            {
                c += mini;
            }
        }

        cout<<c<<endl;
    }
}

/*
1
10
0100100111

answer - 3
*/
