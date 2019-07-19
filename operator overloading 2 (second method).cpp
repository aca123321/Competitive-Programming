#include<iostream>
using namespace std;

class vect
{
    public:
        int x,y;
        vect();
        vect(int, int); // second method -> operator+ is not a member function
};

vect::vect()
{
}

vect::vect(int a, int b)
:x(a), y(b)
{
}

vect operator+(vect p, vect q) // second method
{
    vect newobj;
    newobj.x= p.x + q.x;
    newobj.y= p.y + q.y;

    return (newobj);
}


main()
{ vect vect1(1,1), vect2(2,2), vect3(3,3), res_vect;
  res_vect= vect2+vect1+vect3;
  cout<<"("<<res_vect.x<<","<<res_vect.y<<")"<<endl;
}

