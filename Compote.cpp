#include<iostream>
using namespace std;

main()
{
    int a,b,c,min,i;

    cin>>a>>b>>c;

    if(a <= (b/2))
    {
        if(a <= (c/4))
        {
            min = a;
        }

        else
        {
            min = (c/4);
        }
    }

    else
    {
        if((b/2) <= (c/4))
        {
            min = (b/2);
        }

        else
        {
            min = (c/4);
        }
    }

    cout<<min*7;
}
