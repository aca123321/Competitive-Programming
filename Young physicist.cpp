#include<iostream>
using namespace std;

//just a dummy comment
main()
{
    int n,x,y,z,a,i;

    x=y=z=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        x += a;
        cin>>a;
        y += a;
        cin>>a;
        z += a;
    }

    if((x == 0)&&(y == 0)&&(z == 0))
        cout<<"YES";

    else
        cout<<"NO";
}
