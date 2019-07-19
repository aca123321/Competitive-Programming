#include<bits/stdc++.h>
using namespace std;

struct location
{
    int x,y;
};

main()
{
    long long int t,n,m,i,j,k,**arr;
    struct location *loc;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        arr = new long long int*[n];
        loc = new struct location[n*m];

        for(i=0;i<n;i++)
        {
            arr[i] = new long long int[m];
        }

        for(i=0;i<(m*n);i++)
        {
            loc[i].x = 0;
            loc[i].y = 0;
        }

        k = 0;

        for(i=0;i<n;i++)
        {

            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                loc[k].x = i+1;
                loc[k].y = j+1;
                k++;
            }
        }
    }

        cout<<endl;

        for(i=0;i<(m*n);i++)
        {
            cout<<loc[i].x<<" "<<loc[i].y<<endl;
        }
    }


}
