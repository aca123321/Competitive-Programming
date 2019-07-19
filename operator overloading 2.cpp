#include<iostream>
using namespace std;

class vect
{
    public:
        int x,y;
        vect();
        vect(int, int);
        vect operator+(vect); //first method

};

vect::vect()
{
}

vect::vect(int a, int b)
:x(a), y(b)
{
}

vect vect::operator+(vect p) // first method
{
    vect newobj;
    newobj.x= p.x + x;
    newobj.y= p.y + y;

    return (newobj);
}


main()
{ vect vect1(1,1), vect2(2,2), vect3(3,3), res_vect;
  res_vect= vect2+vect1+vect3;
  cout<<"("<<res_vect.x<<","<<res_vect.y<<")"<<endl;
}
