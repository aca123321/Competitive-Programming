#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli sumofdig(lli a)
{
    lli sum = 0;

    while(a != 0)
    {
        sum += a%10;
        a /= 10;
    }

    return (sum);
}

main()
{
    lli n,i,j,t,a,b,x,y,p,q,k;
    vector<pair<lli,lli>>v[19];

    cin>>t;
    k = 0;

    for(i=0;i<19;i++)
    {
        for(j=0;j<=i;j++)
        {
            a = j;
            b = i-j;

            if(a<=9 && b<=9)
            {
                v[i].pb({a,b});
            }
        }
    }


    /*
    cout<<endl;
    for(i=0;i<19;i++)
    {
        cout<<"v["<<i<<"] -> ";
        for(j=0;j<v[i].size();j++)
        {
            cout<<"("<<v[i][j].f<<", "<<v[i][j].sec<<")  ";
        }
        cout<<endl;
    }
    */

    for(k=0;k<t;k++)
    {
        cin>>n;

        if(n<=9)
        {
            cout<<(((v[10][n-1].f)*10)+(v[10][n-1].sec));
        }
        else
        {
            n -= 9;
            a = n/10;
            b = n%10;
            if(b != 0)
            {
                a++;
            }
            else
            {
                b = 10;
            }
            x = sumofdig(a);
            x = x%10;

            p = 10-x;
            q = 20-x;

            if(p<19)
            {
                if(v[p].size()>=b)
                {
                    cout<<((a*100)+((v[p][b-1].f)*10)+(v[p][b-1].sec));
                }
                else
                {
                    b -= v[p].size();

                    if(v[q].size()>=b)
                    {
                        cout<<((a*100)+((v[q][b-1].f)*10)+(v[q][b-1].sec));
                    }
                }
            }
        }

        if(k != (t-1))
        {
            cout<<endl;
        }
    }

}
