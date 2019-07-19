#include<iostream>
using namespace std;

class comp
{
private:
    float real;
    float img;

public:
    comp(float a,float b):
        real(a), img(b)
        {

        }

    comp()
    {

    }

    void display()
    {
        cout<<this->real<<"+"<<this->img<<"i"<<endl;
    }

        comp operator+(const comp& right )
        {
            comp result;
            result.real= this->real + right.real;
            result.img= this->img + right.img;
            return result;
        }
};

main()
{
    comp c1(3,4), c2(6,2), c3,c4;

    c3= c1 + c2; //evaluates itself as c3= c1.operator+(c2)
    c3.display();
}
