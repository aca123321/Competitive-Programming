#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,j,c=1,flag=0;

    string s="",t="",u="";

    cin>>n;

    cin>>s;

    for(i=1;i<n;i++)
    {
        cin>>t;
        if(s == t)
        {
            c++;
        }

        else
        {
            u = t;
        }
    }

    if(c>(n-c))
    {
        cout<<s;
    }

    else
    {
        cout<<u;
    }
}
