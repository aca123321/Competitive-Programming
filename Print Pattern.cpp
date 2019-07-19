#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,j,a,b,c,t;

    cin>>t;

    while(t--)
    {
        cin>>n;

        a = 1;

        lli mat[n+2][n+2] = {0,0};

        for(i=1;i<=n;i++)
    {
        mat[i][1] = a;
        a += i+1;
    }

    a = 1;

    for(i=1;i<=n;i++)
    {
        mat[1][i] = a;
        a += i;
    }

    a = 0;

    for(i=2;i<=n;i++)
    {
        a += i+1;

        for(j=2;j<=n;j++)
        {
                if((i+j) < n+2)
                {
                    mat[i][j] = mat[i][j-1] + mat[i-1][j] - mat[i-1][j-1] + 1;
                }

                else if((i+j) == n+2)
                {
                    mat[i][j] = mat[i][j-1] + mat[i-1][j] - mat[i-1][j-1];
                }

                else if(i+j > n+2)
                {
                    mat[i][j] = mat[i][j-1] + mat[i-1][j] - mat[i-1][j-1] - 1;
                }
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<mat[i][j]<<" ";
        }

        cout<<endl;
    }
    }


}
