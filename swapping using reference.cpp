#include<iostream>
using namespace std;

void swap(int& , int&);

main()
{
  int a=2, b=3;
  cout<<"a="<<a<<"  b="<< b<<endl;
  swap(a,b);
  cout<<"a="<<a<<"  b="<< b;
}

void swap(int &x, int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
