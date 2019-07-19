#include<bits/stdc++.h>
using namespace std;

main()
{
    int t,x;

    cin>>t;

    while(t--)
    {
        cin>>x;
        x--;

        if(x%6 == 0)
        {
            cout<<(x/6)<<endl;
        }

        else
        {
            cout<<(x/6)+1<<endl;
        }
    }
}
