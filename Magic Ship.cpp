#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb(x) push_back(x)

vector<lli> v[4];
lli udlr[4] = {0},n;

lli when(lli dir, lli count)
{
    lli a,b,c;

    a = count/(udlr[dir]);
    b = count%(udlr[dir]);

    return((n*a)+(v[dir][b]+1));
}

int main()
{
    lli i,xa,xb,ya,yb,j,dx,dy,a,b,c;
    string s,t="UDLR";
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>n;

    dx = xb-xa;
    dy = yb-ya;

    cin>>s;

    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            if(s[i] == t[j])
            {
                udlr[j]++;
                v[j].pb(i);
                break;
            }
        }
    }







    //r
    if(dx>0)
    {
        //ur
        if(dy>0)
        {
            if(udlr[0]>0)
            {
                if(udlr[3]>0)
                {
                    //can reach
                    cout<<max(when(0,dy),when(3,dx));
                }

                else
                {
                    if(dy>=dx)
                    {
                        //can reach
                        cout<<when(0,dy);
                    }

                    else
                    {
                        cout<<-1;
                        return(0);
                    }
                }
            }

            else if(udlr[3]>0)
            {
                if(udlr[0]>0)
                {
                    //can reach
                    cout<<max(when(0,dy),when(3,dx));
                }

                else
                {
                    if(dx>=dy)
                    {
                        //can reach
                        cout<<when(3,dx);
                    }

                    else
                    {
                        cout<<-1;
                        return(0);
                    }
                }
            }

            else
            {
                cout<<-1;
                return (0);
            }
        }

        //dr
        else if(dy<0)
        {
            if(udlr[1]>0)
            {
                if(udlr[3]>0)
                {
                    //can reach
                    cout<<max(when(1,dy),when(3,dx));
                }

                else
                {
                    if(-1*(dy)>=dx)
                    {
                        //can reach
                        cout<<when(1,dy);
                    }

                    else
                    {
                        cout<<-1;
                        return(0);
                    }
                }
            }

            else if(udlr[3]>0)
            {
                if(udlr[1]>0)
                {
                    //can reach
                    cout<<max(when(1,dy),when(3,dx));
                }

                else
                {
                    if(dx>=(-1*(dy)))
                    {
                        //can reach
                        cout<<when(3,dx);
                    }

                    else
                    {
                        cout<<-1;
                        return(0);
                    }
                }
            }

            else
            {
                cout<<-1;
                return (0);
            }
        }

        //r
        else
        {
            if(udlr[3]>0)
            {
                //can reach
                cout<<max(when(0,dy),when(3,dx));
            }

            else
            {
                cout<<-1;
                return(0);
            }
        }
    }









    //l
    else if(dx<0)
    {
        //ul
        if(dy>0)
        {
            if(udlr[0]>0)
            {
                if(udlr[2]>0)
                {
                    //can reach
                    cout<<max(when(0,dy),when(2,dx));
                }

                else
                {
                    if(dy>=dx)
                    {
                        //can reach
                        cout<<when(0,dy);
                    }

                    else
                    {
                        cout<<-1;
                        return(0);
                    }
                }
            }

            else if(udlr[2]>0)
            {
                if(udlr[0]>0)
                {
                    //can reach
                    cout<<max(when(0,dy),when(2,dx));
                }

                else
                {
                    if(dx>=dy)
                    {
                        //can reach
                        cout<<when(2,dx);
                    }

                    else
                    {
                        cout<<-1;
                        return(0);
                    }
                }
            }

            else
            {
                cout<<-1;
                return 0;
            }
        }

        //dl
        else if(dy<0)
        {
            if(udlr[1]>0)
            {
                if(udlr[2]>0)
                {
                    //can reach
                    cout<<max(when(1,dy),when(2,dx));
                }

                else
                {
                    if(-1*(dy)>=dx)
                    {
                        //can reach
                        cout<<when(1,dy);
                    }

                    else
                    {
                        cout<<-1;
                        return(0);
                    }
                }
            }

            else if(udlr[2]>0)
            {
                if(udlr[1]>0)
                {
                    //can reach
                    cout<<max(when(1,dy),when(2,dx));
                }

                else
                {
                    if(dx>=(-1*(dy)))
                    {
                        //can reach
                        cout<<when(2,dx);
                    }

                    else
                    {
                        cout<<-1;
                        return(0);
                    }
                }
            }

            else
            {
                cout<<-1;
                return 0;
            }
        }

        //l
        else
        {
            if(udlr[2]>0)
            {
                //can reach
            }

            else
            {
                cout<<-1;
                return(0);
            }
        }
    }









    //same x
    else
    {
        //u
        if(dy>0)
        {
            if(udlr[0]>0)
            {
                //can reach
                cout<<when(0,dy);
            }

            else
            {
                cout<<-1;
                return(0);
            }
        }

        //d
        else if(dy<0)
        {
            if(udlr[1]>0)
            {
                //can reach
                cout<<when(1,dy);
            }

            else
            {
                cout<<-1;
                return(0);
            }
        }

        //same x and y
        else
        {
            cout<<0;
            return(0);
        }
    }


}
