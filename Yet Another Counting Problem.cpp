#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,c,d,j,k,q,x,y,l,r,count,total;
    vector<lli> v;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>q;
        c = ((a*b)/__gcd(a,b));
        v.clear();
        while(q--)
        {
            cin>>l>>r;

            /*
            count = 0;
            for(i=l;i<=r;i++)
            {
                if((i%a)%b == (i%b)%a)
                {
                    count++;
                    cout<<count<<") "<<i<<" "<<(i%a)%b<<" "<<(i%b)%a<<endl;
                }
            }
            */

            if(a%b == 0 || b%a == 0)
            {
                count = 0;
            }
            else
            {
                count = 0;
                n = 0;
                total = r-l+1;
                x = l;
                y = r;
                if(l%c != 0)
                {
                    l = ((l/c)*c) + 1;
                }
                r = (r/c)*c;

                if(l<=r && r<=y)
                {
                    n = ((r-l)/c)+1;
                    n += (n-1)*(max(a,b)-1);
                    n += min(y,r+max(a,b)-1)-r;
                }
                else
                {
                    for(i=x;i<=y;i++)
                    {
                        if((i%a)%b == (i%b)%a)
                        {
                            n++;
                        }
                    }
                }

                count = total - n;
            }

            v.pb(count);

        }


        for(auto it: v)
        {
            cout<<it<<" ";
        }
        cout<<endl;


    }

}
