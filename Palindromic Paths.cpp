#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,j,k,b,c;

    cin>>n;

    lli mat[n+1][n+1];

    mat[1][1] = 1;
    mat[n][n] = 0;

    while(1)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-2;j+=2)
            {
                x1 = i;
                y1 = j;
                x2 = i;
                y2 = j+2;
                cout<<"? "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                fflush(stdin);
                cin>>a;
                if(a == 1)
                {
                    mat[x2][y2] = mat[x1][y1];
                }
                else
                {
                    mat[x2][y2] = 1-mat[x1][y1];
                }
            }
        }

        for(i=1;i<=n;i+=2)
        {
            for(j=1;j<=n-2;j+=2)
            {
                x1 = j;
                y1 = i;
                x2 = j+2;
                y2 = i;
                cout<<"? "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                fflush(stdin);
                cin>>a;
                if(a == 1)
                {
                    mat[x2][y2] = mat[x1][y1];
                }
                else
                {
                    mat[x2][y2] = 1-mat[x1][y1];
                }
            }
        }

        for(i=1;i<n;i++)
        {
            x1 = i;
            y1 = i;
            x2 = i+1;
            y2 = i+1;
            cout<<"? "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
            fflush(stdin);
            cin>>a;
            if(a == 1)
            {
                mat[x2][y2] = mat[x1][y1];
            }
            else
            {
                mat[x2][y2] = 1-mat[x1][y1];
            }
        }
    }

}
