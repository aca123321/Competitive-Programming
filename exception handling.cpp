#include<iostream>
#include<exception> //important
using namespace std;

main()
{   float a;
    cout<<"Enter a positive number\n";
    cin>>a;

    try
    {
        if(a<=0)
            throw(a);
    }
    catch(int x)
    {
        cout<<x<<" is not a positive number\n";
    }
}
