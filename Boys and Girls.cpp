#include<bits/stdc++.h>
#include<fstream>
using namespace std;

main()
{
    int n,i,m;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin>>n>>m;
    string s;
    s = "";

    if(n>m)
    {
        for(i=0;i<m;i++)
        {
            s += "BG";
        }
        for(i=0;i<(n-m);i++)
        {
            s += "B";
        }
    }

    else
    {
        for(i=0;i<n;i++)
        {
            s += "GB";
        }
        for(i=0;i<(m-n);i++)
        {
            s += "G";
        }
    }

    cout<<s;
}
