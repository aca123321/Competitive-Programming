#include<iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    void setname(string a)
    {this->name= a;}

    void setage(int b)
    { this->age=b; }

    void display()
    {
        cout<<"My name is "<<this->name<<" and my age is "<<this->age<<endl;
    }

};

class student : public person
{ public:
 student(string a, int b)
 {
     setname(a);
     setage(b);
     this->display();
 }
};

main()
{
    student s1("Yaseen",19);
}
