#include<bits/stdc++.h>
using namespace std;

main()
{
    string str;
    int n,i,ind = 0,flag = 0,count = 0;

    cin>>n;
    cin>>str;

    for(i=1;i<n;i++)
    {
        if(str[i-1]>=str[i])
        {
            count++;
        }

        else
        {
            count = 0;
        }
    }

    ind = n-1-count;

    for(i=0;i<n;i++)
    {
        if(i != ind)
        {
            cout<<str[i];
        }
    }
}
