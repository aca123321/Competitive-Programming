#include<bits/stdc++.h>
using namespace std;

class parent
{
public:

    parent()
    {
        cout<<"Parent constructor\n";
    }

    //pure virtual function (ie. has to be implemented/overwritten by child classes) and has no body at all (ie. has no body specified by <function_name>()=0; )
    //virtual void talk()=0;


    //basic virtual function (ie. may or may not be implemented/overwritten by the child classes)
    /*
    virtual void talk()
    {
        cout<<"Parent Talking\n";
    }
    */


    ~parent()
    {
        cout<<"Parent Destructor\n";
    }
};

class child: public parent
{
    public:
    child()
    {
        cout<<"Child constructor\n";
    }
    /*
    void talk()
    {
        cout<<"Child Talking\n";
    }
    */
    ~child()
    {
        cout<<"Child destructor\n";
    }

};


main()
{
    child a;
    a.talk();
}
