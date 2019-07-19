#include<iostream>
#include<sstream>
#include<string>
using namespace std;

main()
{
    int x,num = 345;
    string s = "12345", t;

    ostringstream str1;
    stringstream obj(s); //object from stringstream class

    obj>>x;
    str1<<num;
    t = str1.str();

    cout<<x-3<<endl<<t;
}
