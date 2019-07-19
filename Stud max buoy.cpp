#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,i,n,m,k,j,a,max;

    cin>>t;

    lli** sumr = new lli*[501];
    lli** sumc = new lli*[501];
    lli** arr = new lli*[501];

    for(i=0;i<501;i++)
    {
        (sumr[i]) = new lli[501];
        (sumc[i]) = new lli[501];
        (arr[i]) = new lli[501];
    }

    while(t--)
    {
        cin>>n>>m>>k;

        max = INT_MIN;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }

        for(i=0;i<n;i++)
        {
            sumr[i][0] = arr[i][0];
        }

        for(i=0;i<m;i++)
        {
            sumc[0][i] = arr[0][i];
        }

        for(i=0;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                sumr[i][j] = sumr[i][j-1] + arr[i][j];
            }
        }

        for(i=1;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                sumc[i][j] = sumc[i-1][j] + arr[i][j];
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=(k-1);j<m;j++)
            {
                if((sumr[i][j] - sumr[i][j+1-k] + arr[i][j+1-k]) > max)
                {
                    max = (sumr[i][j] - sumr[i][j+1-k] + arr[i][j+1-k]);
                }
            }
        }

        for(i=(k-1);i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if((sumc[i][j] - sumc[i+1-k][j] + arr[i+1-k][j]) > max)
                {
                    max = (sumc[i][j] - sumc[i+1-k][j] + arr[i+1-k][j]);
                }
            }
        }

        cout<<max<<endl;
    }
}
