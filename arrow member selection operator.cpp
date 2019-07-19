#include<iostream>
using namespace std;

class c
{
public:
    void print();
};

void c::print()
{
  cout<<"Crap\n";
}

main()
{
    c obj;
    c *ptr2obj=&obj;

    obj.print();

    ptr2obj->print(); //using pointer and arrow member selection operator to select members of a class
}
