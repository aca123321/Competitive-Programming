#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli mat[5][5] = {0,0},minr=0,minc=0,row,col;

void dispmat()
{
    lli i,j;

    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

lli findminr()
{
    lli i,j,count = 0;

    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            if(mat[i][j] == 1)
            {
                count++;
            }
        }

        if(count <= minr)
        {
            minr = i;

            if(count <= 2)
            {
                for(i=1;i<5;i++)
                {
                    if(mat[minr][i] == 0)
                    {
                        row = minr;
                        col = i;
                        break;
                    }
                }
            }
        }

        count = 0;
    }

    return minr;
}

lli findminc()
{
    lli i,j,count = 0;

    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            if(mat[j][i] == 1)
            {
                count++;
            }
        }

        if(count <= minc)
        {
            minc = i;

            if(count <= 2)
            {
                for(i=4;i>=1;i--)
                {
                    if(mat[i][minc] == 0)
                    {
                        row = i;
                        col = minc;
                        break;
                    }
                }
            }
        }
        count = 0;
    }
    return minc;
}

void check()
{
    lli i,j,count=0;

    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            if(mat[i][j] == 1)
            {
                count++;
            }
        }

        if(count == 4)
        {
            for(j=1;j<5;j++)
            {
                mat[i][j] = 0;
            }
        }
        count = 0;
    }

    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            if(mat[j][i] == 1)
            {
                count++;
            }
        }

        if(count == 4)
        {
            for(j=1;j<5;j++)
            {
                mat[j][i] = 0;
            }
        }
        count = 0;
    }
}


void place(lli type,lli r,lli c)
{
    if(type == 1)
    {
        mat[r][c] = 1;
        mat[r][c+1] = 1;
    }

    else
    {
        mat[r][c] = 1;
        mat[r-1][c] = 1;
    }
}

main()
{
    lli n,i,j,k,r,c;

    string s;
    cin>>s;
    n = s.length();

    for(k=0;k<n;k++)
    {
        if(s[k] == '1')
        {
            r = findminr();
            place(0,row,col);
            cout<<row<<" "<<col<<endl;
            check();
        }

        else
        {
            c = findminc();
            place(1,row,col);
            cout<<row<<" "<<col<<endl;
            check();
        }
    }
}
