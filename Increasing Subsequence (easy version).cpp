#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define pf push_front
#define b back()
#define f front()
#define popb pop_back()
#define popf pop_front()

main()
{
    lli i,n,cur;
    cin>>n;
    lli arr[n];
    deque <lli> d;
    vector<lli> v;
    string s = "";

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        d.pf(arr[i]);
    }

    cur = min(d.b,d.f);
    v.pb(cur);
    if(cur == d.b)
    {
        d.popb;
        s += 'L';
    }
    else
    {
        d.popf;
        s += 'R';
    }

    while(d.size() != 0)
    {
        if(d.b > cur && d.f > cur)
        {
            cur = min(d.b,d.f);
            v.pb(cur);

            if(cur == d.f)
            {
                s += 'R';
                d.popf;
            }

            else
            {
                s += 'L';
                d.popb;
            }
        }

        else if(d.b <= cur && d.f > cur)
        {
            s += 'R';
            cur = d.f;
            v.pb(cur);
            d.popf;
        }

        else if(d.b > cur && d.f <= cur)
        {
            s += 'L';
            cur = d.b;
            v.pb(cur);
            d.popb;
        }

        else
        {
            break;
        }
    }

    cout<<s.length()<<endl<<s;
}
