#include<bits/stdc++.h>
using namespace std;

#define lli long long int

struct pos
{
    lli x,y;
};

lli manhattan_dist(struct pos ,struct pos);

main()
{
    lli t,n,x,y,a,b,i,j,k,**flag,md,count;

    pos *arr,king,temp;

    cin>>t;

    while(t--)
    {
        cin>>n;

        count = 0;
        arr = new struct pos[n];

        flag = new lli*[3];

        for(i=0;i<3;i++)
        {
            flag[i] = new lli[3];
        }

        for(i=0;i<n;i++)
        {
            cin>>arr[i].x>>arr[i].y;
        }

        cin>>a>>b;
        king.x = 0;
        king.y = 0;

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                flag[i][j] = 0;
            }
        }

        for(i=0;i<n;i++)
        {
            arr[i].x -= (a);
            arr[i].y -= (b);
        }

        for(i=0;i<n;i++)
        {
            md = manhattan_dist(arr[i],king);

            if(md >= 1 && md <= 5)
            {
                for(j=-1;j<2;j++)
                {
                    for(k=-1;k<2;k++)
                    {
                        if(arr[i].x != j && arr[i].y != k)
                        {
                            temp.x = j;
                            temp.y = k;

                            if(manhattan_dist(arr[i],temp) == 3)
                            {
                                flag[(arr[i].x)+1][(arr[i].y) +1] = flag[(arr[i].x)+1][(arr[i].y) +1] + 1;
                            }
                        }
                    }
                }
            }
        }

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(flag[i][j] != 0)
                {
                    count++;
                }
            }
        }

        if(count == 9)
        {
            cout<<"YES\n";
        }

        else
        {
            cout<<"NO\n";
        }
    }
}

lli manhattan_dist(struct pos p,struct pos q)
{
    lli a,b;

    if((p.x - q.x)<0)
    {
        a = -1 * (p.x - q.x);
    }

    else
    {
        a = (p.x - q.x);
    }

    if((p.y - q.y)<0)
    {
        b = -1 * (p.y - q.y);
    }

    else
    {
        b = (p.y - q.y);
    }

    return (a+b);
}

