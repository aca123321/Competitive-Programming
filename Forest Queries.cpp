#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[1002][1002];

int main()
{
    lli n,i,t,j,a,b,x1,x2,y1,y2;
    char c;
    cin>>n>>t;

    for(i=0;i<=n;i++)
    {
        arr[i][0] = 0;
        arr[0][i] = 0;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>c;
            if(c == '*')
            {
                arr[i][j] = arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1] + 1;
            }
            else if(c == '.')
            {
                arr[i][j] = arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1];
            }
        }
    }

    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        cout<<(arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1])<<endl;
    }
}
