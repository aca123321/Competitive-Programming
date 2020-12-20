#include<bits/stdc++.h>
using namespace std;

#define lli long long int

inline float cube(float x)
{
    return (x*x*x);
}

class animal
{
    public:
    animal()
    {
        cout<<"I am an animal\n";
    }

    void makeSound()
    {
        cout<<"Making sounds\n";
    }
};

class dog : public animal
{
    public:
    dog()
    {
        animal::makeSound();
    }

    void makeSound()
    {
        cout<<"Woof..Woof..Woof\n";
    }
};

class cow : public animal
{
    public:
    cow()
    {
        animal::makeSound();
    }

    void makeSound()
    {
        cout<<"Moo..Moo..Moo\n";
    }
};

class duck : public animal
{
    public:
    duck()
    {
        animal::makeSound();
    }

    void makeSound()
    {
        cout<<"quack..quack..quack\n";
    }
};


main()
{
    int i;
    dog a;
    cow b;
    duck c;
    a.makeSound();
    b.makeSound();
    c.makeSound();
}
