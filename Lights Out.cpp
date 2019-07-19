#include<bits/stdc++.h>
using namespace std;

int mat[3][3], res[5][5];

void toggle(int a, int b)
{
    int i,j;

    for(i=a-1;i<=(a+1);i++)
    {
        for(j=b-1;j<=(b+1);j++)
        {
            if(!((i==a-1 && j==b-1) || (i==a+1 && j==b+1) || (i == a-1 && j== b+1) || (i == a+1 && j== b-1)))
            {
                if(res[i][j] == 0)
                {
                    res[i][j] = 1;
                }

                else
                {
                    res[i][j] = 0;
                }
            }
        }
    }
}


main()
{
    int i,j,a;

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            res[i][j] = 1;
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]%2 != 0)
            {
                toggle(i+1,j+1);
            }
        }
    }

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout<<res[i][j];
        }
        cout<<endl;
    }
}
