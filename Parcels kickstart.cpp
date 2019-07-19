#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

lli dist(lli a, lli b, lli c, lli d)
{
    return(abs(c-a)+abs(d-b));
}

main()
{
    lli t,r,c,i,j,k,count,x,y,maxi;
    cin>>t;
    lli ans[t]={0};
    string temp;
    lli dis[251][251];
    vector< pair < lli , lli > > v;

    for(k=0;k<t;k++)
    {
        cin>>r>>c;
        count = 0;
        x = 0;
        y = 0;
        string s[r];
        maxi = INT_MIN;
        v.clear();

        for(i=0;i<r;i++)
        {
            cin>>temp;
            s[i] = temp;
        }

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(s[i][j] == '0')
                {
                    count++;
                    x += i;
                    y += j;
                    dis[i][j] = INT_MAX;
                }

                else
                {
                    dis[i][j] = 0;
                    v.pb({i,j});
                }
            }
        }

        if(count == 0)
        {
            cout<<"Case #"<<k+1<<": "<<0;
            if(k != (t-1))
            {
                cout<<endl;
            }
            continue;
        }
        s[(x/count)][(y/count)] = '1';
        dis[x/count][y/count] = 0;

        v.pb({(x/count),(y/count)});



        for(auto it: v)
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    dis[i][j] = min(dis[i][j],dist(it.first,it.second,i,j));
                }
            }
        }

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                maxi = max(dis[i][j],maxi);
            }
        }

        cout<<"Case #"<<k+1<<": "<<maxi;
        if(k!=(t-1))
        {
            cout<<endl;
        }
    }
}
