#include<iostream>
using namespace std;

class c
{
public:
    int num;
    c();
    c(int);
    c operator+(c);
};

 c::c() //constructor with no parameter for blankobj
 {

 }

 c::c(int a) //constructor with parameter for obj1 and obj2
{ num=a;
}

c c::operator+(c obj_written_just_before_plus_sign)
{
    c obj_to_be_assigned_to_blankobj;
    obj_to_be_assigned_to_blankobj.num= num + obj_written_just_before_plus_sign.num ;
    return (obj_to_be_assigned_to_blankobj);
}

main()
{
    c obj1(34), obj2(21), blankobj;

    blankobj=obj1+obj2; //obj1 becomes the parameter passed to the operator+function (ie. operator+(obj1))
    cout<<blankobj.num;
}
