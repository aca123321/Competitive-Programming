#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;

    cin>>n;

    if(n%2 != 0)
    {
        cout<<-1;
    }

    else
    {
        while(n>=1)
        {
            cout<<n--<<" ";
        }
    }
}
