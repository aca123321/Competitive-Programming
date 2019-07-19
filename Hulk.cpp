#include<iostream>
using namespace std;

main()
{
    int n,i;

    cin>>n;

    if(n == 1)
    {
        cout<<"I hate it";
    }

    else
    {
        for(i=0;i<n;i++)
    {
        if(i%2 == 0)
        {
            cout<<"I hate";
        }

        else
        {
            cout<<"I love";
        }

        if(i != n-1)
        {
            cout<<" that ";
        }
    }

    cout<<" it";
    }
}
