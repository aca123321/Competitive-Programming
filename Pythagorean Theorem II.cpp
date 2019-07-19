#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

struct s
{
    lli a,b;
};

main()
{
    lli i,c=0,a,b,n,m,k,j,ans=0;
    struct s t;

    cin>>k;
    lli x,y;
    vector<struct s> v[10002];
    map<lli,lli> done;

    m = 2;
    for(n=1;n<=100;n++)
        {
            for(m=n+1;m<=100;m++)
            {
                x = n*n;
                y = m*m;
                a = y-x;
                b = 2*n*m;
                c = x+y;

                if(c>k)
                {
                    break;
                }
                else if(a>0)
                {
                    i = 1;
                    while(c*i <= k)
                    {
                        if(done[c*i]==0)
                        {
                            t.a = a*i;
                            t.b = b*i;
                            v[c*i].pb(t);
                            ans++;
                            cout<<a*i<<" "<<b*i<<" "<<c*i<<endl;
                            done[c*i]++;
                        }
                        else
                        {
                            lli flag = 0;
                            for(i=0;i<v[c*i].size();i++)
                            {
                                if( (a*i == (v[c*i][i]).a) || (a*i == (v[c*i][i]).b) )
                                {
                                    flag = 1;
                                    break;
                                }
                            }

                            if(flag == 0)
                            {
                                t.a = a*i;
                                t.b = b*i;
                                v[c*i].pb(t);
                                ans++;
                                cout<<a*i<<" "<<b*i<<" "<<c*i<<endl;
                                done[c*i]++;
                            }
                        }

                        i++;
                    }
                }
            }
        }

    cout<<ans;
}
