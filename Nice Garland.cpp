#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,j,k,r[3]={0},g[3]={0},b[3]={0},count = 0,mini=INT_MAX,a,bl,c,ans=0;

    cin>>n;
    string s,t="";
    cin>>s;

    t += s;

    for(i=0;i<n;i++)
    {
        if(s[i] == 'R')
        {
            r[i%3]++;
        }

        else if(s[i] == 'G')
        {
            g[i%3]++;
        }

        else
        {
            b[i%3]++;
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j!=i)
            {
                for(k=0;k<3;k++)
                {
                    if(k!=j && k!= i)
                    {
                        if((n-(r[i]+g[j]+b[k])) < mini)
                        {
                            mini = n-(r[i]+g[j]+b[k]);
                            a = i;
                            bl = j;
                            c = k;
                        }
                    }
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        if(i%3 == a)
        {
            s[i] = 'R';
        }

        else if(i%3 == bl)
        {
            s[i] = 'G';
        }

        else
        {
            s[i] = 'B';
        }
    }

    cout<<mini<<endl;
    cout<<s;

}
