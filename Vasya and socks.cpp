#include<iostream>
using namespace std;

main()
{
    int n,m,socks,day=0;

    cin>>n>>m;
    socks=n;

    while(socks>0)
    {
        socks--;
        day++;
        if(day%m == 0)
            socks++;
    }

    cout<<day;
}
