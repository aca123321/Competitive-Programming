#include<iostream>
using namespace std;

class human
{
    string name;
    int age;

public:
    human(string a, int b)
    {
        name=a;
        age=b;
        display(*this); //"this" is a pointer to the object h1 here, so we use *this to access the object.
    }
    friend void display(human );
};

void display(human h)
{
  cout<<"My name is "<<h.name<<" and my age is "<<h.age<<endl;
}

main()
{
    human h1("Yaseen",19);
}
