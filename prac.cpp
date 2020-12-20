#include<bits/stdc++.h>
using namespace std;

#define lli long long int


main()
{
    string s = "yaseen";
    lli n,i,j,a,b;
    n = 6;

    lli arr[n] = {5,4,3,2,1,0};
    lli vis[n];

    for(i=0;i<n;i++)
    {
        vis[i] = 0;
    }
    char c,d;

    for(i=0;i<n;i++)
    {
        if(vis[i] == 0)
        {
            c = s[i];
            j = arr[i];
            while(vis[j] == 0)
            {
                d = s[j];
                s[j] = c;
                c = d;
                vis[j] = 1;
                j = arr[j];
            }
        }
    }

    cout<<s<<endl;
}
