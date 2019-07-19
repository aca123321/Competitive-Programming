#include<iostream>
using namespace std;

main()
{
    int n,i,x;

    cin>>n;

    if(n%2 == 0)
    {
        cout<<"4 "<<(n-4);
    }

    else
    {
        cout<<"9 "<<(n-9);
    }
}
