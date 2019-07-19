#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

int bet(lli b, lli a, lli steps,lli m)
{
    lli x,y;

    x = round(pow(2,steps));
    y = x;

    if(b <= ((x*a) + (y*m)) && b >= ((x*a) + (y*1)) ) // in zone
    {
        return (b - ((x*a) + (y*1)));
    }
    else if(b < ((x*a) + (y*1))) //below zone
    {
        return -1;
    }
    return 0; //not yet reached zone
}

main()
{
    lli i,n,q,mini=0,maxi=0,a,b,c,j,d,m,flag = 0;
    vector<lli> v;

    cin>>q;

    while(q--)
    {
        cin>>a>>b>>m;
        flag = 0;
        v.clear();
        i = 0;
        lli x;
        while(1)
        {
            x = bet(b,a,i,m);

            if(x == 0)
            {
                c = round(pow(2,i));
                v.pb(c*(a+1));
                i++;
            }
            else if(x == -1)
            {
                cout<<-1<<endl;
                break;
            }
            else
            {
                c = round(pow(2,i));
                v.pb(c*(a+1));

                cout<<i+2<<" "<<a<<" ";
                for(j=v.size()-1;j>=0;j--)
                {
                    if(x<=(c*(m-1)))
                    {
                        v[j] += x;
                        x = 0;
                        break;
                    }
                    else
                    {
                        v[j] += c*(m-1);
                        x -= c*(m-1);
                    }
                }
                for(auto it: v)
                {
                    cout<<it<<" ";
                }
                cout<<endl;

                break;
            }
        }

    }

}
