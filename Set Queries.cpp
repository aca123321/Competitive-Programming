#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli x,n,type;

    cin>>n;

    set<lli> s;

    set<lli> :: iterator i;

    while(n--)
    {
        cin>>type>>x;

        if(type == 1)
        {
            s.insert(x);
        }

        else if(type == 2)
        {
            s.erase(x);
        }

        else
        {
            i = s.find(x);

            if(i != s.end())
            {
                cout<<"Yes\n";
            }

            else
            {
                cout<<"No\n";
            }
        }
    }

}
