#include<iostream>
using namespace std;

void function_to_get_the_object_to_go_out_of_scope_of_main();

class c
{
public:
    void crap();

    c()
    {
        cout<<"constructor is called when the object is created\n";
    }

    ~c()
    {
        cout<<"destructor is called as soon as object goes out of scope\n";
    }
};

void c::crap()
{
        cout<<"crap\n";
}

//comment out different main functions each time to see how the object goes out of scope

main()  //the object goes out of scope when program ends with this main function
{
   c obj;
   cout<<"random code\n";
}



main() //the object goes out of scope when a new function is called in this main function
{
    c obj;

    function_to_get_the_object_to_go_out_of_scope_of_main();
}


void function_to_get_the_object_to_go_out_of_scope_of_main()
{
    cout<<"the object is now out of scope and this is the reason why the destructor will be called\n";
}

main() //Here, the object goes out of scope when the scope of the block of code in which the object was declared ends
{
    cout<<"Here, the object goes out of scope when the scope of the block of code in which the object was declared ends\n";

    { c obj;
      cout<<"block of code in which the object was declared is executed and the destructor will be called\n";
    }
}


main() //using pointer
{
    c obj;
    c *ptr2obj;

    ptr2obj->crap();
}
