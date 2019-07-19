#include<iostream>
using namespace std;

class father
{
public:
    int height;

    father(int h):
        height(h)
    {
        cout<<"I am the father and I have a height of "<<height<<endl;
    }
};

class child : public father
{
public:
    child(int x) : father(x) //member initialiser used.
    {
        cout<<"I am child class\n";
    }
};

main()
{
    child(5);
}
