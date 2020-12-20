#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,k,a,b,c,j,x,y;

    vector<lli> v;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        v.clear();

        if(n%2 == 0)
        {
            if(k%2 == 0)
            {
                if(n>=k)
                {
                    for(i=0;i<k-1;i++)
                    {
                        v.pb(1);
                    }
                    v.pb((n-k+1));
                }
                else
                {
                    v.pb(-1);
                }
            }
            else
            {
                if(n>=(2*k))
                {
                    for(i=0;i<k-1;i++)
                    {
                        v.pb(2);
                    }
                    v.pb((n-(2*k)+2));
                }
                else
                {
                    v.pb(-1);
                }
            }
        }
        else
        {
            if(k%2 == 0)
            {
                v.pb(-1);
            }
            else
            {
                if(n >= k)
                {
                    for(i=0;i<k-1;i++)
                    {
                        v.pb(1);
                    }
                    v.pb(n-k+1);
                }
                else
                {
                    v.pb(-1);
                }
            }
        }

        if(v[0] == -1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            for(auto it: v)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }

    }

}
