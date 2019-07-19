#include<iostream>
using namespace std;

class person
{
public:
    virtual void intro()
    {
        cout<<" I'm a person\n";
    }
};

class student: public person
{ public:
    void intro()
    {
        cout<<" I'm a student\n";
    }
};

class farmer: public person
{ public:
    void intro()
    {
        cout<<" I'm a farmer\n";
    }
};

void whothis(person &p) //(person &p) as parazmeter and not person(p)
{
    p.intro();
}

main()
{
    student s;
    farmer f;
    s.intro();
    f.intro();
    whothis(s);
    whothis(f);
}
