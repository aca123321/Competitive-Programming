#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    lli l,r,x,y,a,b,c,i,j,t;

    cin>>t;

    while(t--)
    {
        cin>>l>>r;

        if(2*l <= r)
        {
            x = l;
            y = 2*l;
            cout<<x<<" "<<y<<endl;
        }
        else
        {
            cout<<-1<<" "<<-1<<endl;
        }
    }

}
