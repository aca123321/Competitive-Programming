#include<iostream>
using namespace std;

class c
{
    int regvar;
    const int constvar;

public:
    c(int a, int b);
  /*  c(int a,int b)
    :regvar(a), constvar(b)
   {
    }
*/
    void print();
};

c::c(int a,int b)  //constructor is defined outside class
:regvar(a), constvar(b)
{
}

void c::print()
{
    cout<<"regular variable is "<<regvar<<" and constant variable is "<<constvar<<endl;
}

main()
{
    c obj(1,3);
    obj.print();
}
