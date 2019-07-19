#include<iostream>
using namespace std;

main()
{
    int n,i,j,x=0,*home,*away;

    cin>>n;
    home = new int[n];
    away = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>home[i];
        cin>>away[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(home[i] == away[j])
                x++;
        }
    }

    cout<<x;
}
