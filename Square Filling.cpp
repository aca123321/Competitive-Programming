#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back


main()
{
    lli n,i,a,m,j,b,c;

    cin>>n>>m;
    lli arr[n][m],brr[n][m];
    vector<pair<lli,lli>> v;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
            brr[i][j] = 0;
        }
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(arr[i][j] == 1 && arr[i+1][j] == 1 && arr[i][j+1] == 1 && arr[i+1][j+1] == 1)
            {
                brr[i][j] = 1;
                brr[i+1][j] = 1;
                brr[i][j+1] = 1;
                brr[i+1][j+1] = 1;

                v.pb({i+1,j+1});
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j] != brr[i][j])
            {
                cout<<-1;
                return 0;
            }
        }
    }



    cout<<v.size()<<endl;

    for(auto it: v)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
