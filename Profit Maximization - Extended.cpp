#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define pb push_back
#define sec second

vector<lli> v;

main()
{
    lli n,i,a,b,count=0,ans=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
    }

    stack<lli> s;
    i=0 ;
    while(i < n || !s.empty())
    {
        if(!s.empty() && i<n)
        {
            if(v[i] < s.top())
            {
                a = s.top();
                b = s.top();
                while(!s.empty())
                {
                    ans += a - b;
                    //cout<<"adding "<<a<<"-"<<b<<" = "<<(a-b)<<endl;
                    a = b;
                    s.pop();
                    if(!s.empty())
                    {
                        b = s.top();
                    }
                }
            }
            s.push(v[i]);
            i++;
        }
        else if(!s.empty() && i == n)
        {
            a = s.top();
            b = s.top();
            while(!s.empty())
            {
                ans += a - b;
                //cout<<"adding "<<a<<"-"<<b<<" = "<<(a-b)<<endl;
                a = b;
                s.pop();
                if(!s.empty())
                {
                    b = s.top();
                }
            }
            break;
        }
        else
        {
            s.push(v[i]);
            i++;
        }
    }

    cout<<ans;
}
