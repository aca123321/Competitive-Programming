#include<iostream>
using namespace std;

class person
{
public:
person()
{
    cout<<"Constructor of person class is called\n";
}

~person()
{
    cout<<"Destructor of person class is called\n";
}
};

class student : public person
{
public:
    student()
    {
        cout<<"Constructor of student class is called\n";
    }

    ~student()
    {
        cout<<"Destructor of student class is called\n";
    }
};

main()
{
    student s;
}
