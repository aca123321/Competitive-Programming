#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,m,i,j,c=0;

    cin>>n>>m;

    for(i=0;i<=sqrt(n);i++)
    {
        for(j=0;j<=sqrt(m);j++)
        {
            if( (((i*i)+j)== n) && (((j*j)+i)== m) )
            {
                c++;
            }
        }
    }

    cout<<c;
}

