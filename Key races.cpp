#include<iostream>
using namespace std;

main()
{
    int s,v1,t1,v2,t2,time1, time2;

    cin>>s>>v1>>v2>>t1>>t2;

    if((s*v1+(2*t1))<(s*v2+(2*t2)))
    {
        cout<<"First\n";
    }

    else if((s*v2+(2*t2))<(s*v1+(2*t1)))
    {
        cout<<"Second\n";
    }

    else
    {
        cout<<"Friendship\n";
    }
}
