#include<iostream>
#include<string>
using namespace std;

main()
{
    string g,h,p,q; // g -> guest , h -> host , p -> pile
    int ng,nh,np,i,j,c=0,d=0;

    cin>>g>>h>>p;
    ng = g.length();
    nh = h.length();
    np = p.length();

    q = p;
    if(np == (ng + nh))
    {
        for(i=0;i<ng;i++)
        {
            for(j=0;j<np;j++)
            {
                if(g[i] == p[j])
                {
                    p[j] = '#';
                    d++;
                    break;
                }
            }
        }

        if(d == ng)
        {
            d = 0;

        for(i=0;i<nh;i++)
        {
            for(j=0;j<np;j++)
            {
                if(h[i] == p[j])
                {
                    p[j] = '#';
                    d++;
                    break;
                }
            }
        }

        if(d == nh)
        {
            cout<<"YES";
        }

        else
            cout<<"NO";

        }

        else
            cout<<"NO";
    }

    else
        cout<<"NO";
}
