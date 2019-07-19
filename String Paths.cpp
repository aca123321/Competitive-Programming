#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,n,i,j,q,**arr,**max,x,y;

    char a;

    cin>>t;

    arr = new lli*[1001];
    max = new lli*[1001];

    for(i=0;i<1001;i++)
    {
        arr[i] = new lli[1001];
        max[i] = new lli[1001];
    }

    while(t--)
    {
        cin>>n>>q;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a;

                if(a == 'a')
                {
                    arr[i][j] = 1;
                }

                else
                {
                    arr[i][j] = 0;
                }

                max[i][j] = 0;
            }
        }

        if(arr[0][0] == 1)
        {
            max[0][0] = 1;
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if((arr[i][j+1] == 1) )
                {
                    if((max[i][j] + 1) > max[i][j+1])
                    {
                        max[i][j+1] = (max[i][j] + 1);
                    }
                }

                else
                {
                    if(max[i][j] > max[i][j+1])
                    {
                        max[i][j+1] = max[i][j];
                    }
                }

                if((arr[i+1][j] == 1))
                {
                    if((max[i][j] + 1) > max[i+1][j])
                    {
                        max[i+1][j] = max[i][j] + 1;
                    }
                }

                else
                {
                    if(max[i][j] > max[i+1][j])
                    {
                        max[i+1][j] = max[i][j];
                    }
                }

            }
        }


        for(i=0;i<q;i++)
        {
            cin>>x>>y;

            cout<<((x + y - 1) - (max[x-1][y-1]))<<endl;
        }

    }
}
