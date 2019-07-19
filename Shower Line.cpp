#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define s second
#define f first

main()
{
    lli n,i,j,a,b,d,e,c,x,maxi=INT_MIN;
    lli mat[5][5];

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>mat[i][j];
        }
    }

    for(a=0;a<5;a++)
    {
        for(b=0;b<5;b++)
        {
            if(b!=a)
            {
                for(c=0;c<5;c++)
                {
                    if(c!=a &&c !=b)
                    {
                        for(d=0;d<5;d++)
                        {
                            if(d!=a && d!=b && d!= c)
                            {
                                for(e=0;e<5;e++)
                                {
                                    if(e!=a && e!=b && e != c && e!= d)
                                    {
                                        x = 2*(mat[e][d]+mat[d][e]+mat[c][d]+mat[d][c]) + mat[b][c] + mat[c][b] + mat[a][b] + mat[b][a];
                                        if(x>maxi)
                                        {
                                            maxi = x;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout<<maxi;
}
