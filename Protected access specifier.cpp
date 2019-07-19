#include<iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;
public:
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
{   student s1("Yaseen",19); //will work

    person p;
    /*p.name="Yaseen";
    cout<<p.name;              won't work */
}

