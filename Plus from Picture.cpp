#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,j,m,flag = 0,x=-1,y=-1,hi=-1,hj=-1,vi=-1,vj=-1,countx=0,county=0,hind=-1,vind=-1;

    cin>>n>>m;
    string s[n];
    vector<pair<lli,lli>> vx,vy;

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j] == '*')
            {
                vind = j;
                vj = j;
                vi = i;

                while(i<n && s[i][j] =='*')
                {
                    vy.pb({i,j});
                    i++;
                }

                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            break;
        }
    }

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if(s[i][j] == '*')
            {
                hind = i;
                hi = i;
                hj = j;

                while(j<m && s[i][j] =='*')
                {
                    vx.pb({i,j});
                    j++;
                }

                if(flag == 1)
                {
                    flag = 2;
                    break;
                }
            }
        }
        if(flag == 2)
        {
            break;
        }
    }

    if(flag !=  2)
    {
        cout<<"NO";
        return 0;
    }

    for(i=1;i<vx.size()-1;i++)
    {
        for(j=1;j<vy.size()-1;j++)
        {
            if(vx[i].f == vy[j].f && vx[i].sec == vy[j].sec )
            {
                flag = 3;
            }
        }
    }

    if(flag != 3)
    {
        cout<<"NO";
        return 0;
    }

    for(auto it: vx)
    {
        s[it.f][it.sec] = '#';
    }

    for(auto it: vy)
    {
        s[it.f][it.sec] = '#';
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j] =='*')
            {
                cout<<"NO";
                return 0;
            }
        }
    }

    if(vx.size() >= 3 && vy.size() >= 3)
    {
        cout<<"YES";
    }
}

/*

for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j] == '*')
            {
                flag = 1;

                if( (j<m-1) && s[i][j+1] == '*' )
                {
                    x = i;
                    while(j<m)
                    {

                        if(s[i][j] != '*')
                        {
                            break;
                        }
                        else
                        {
                            countx++;
                        }

                        j++;
                    }

                    j++;
                    while(j<m)
                    {
                        if(s[i][j] == '*')
                        {
                            cout<<"NO";
                            return 0;
                        }
                        j++;
                    }
                }
            }
        }
    }

*/
