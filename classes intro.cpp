#include<iostream>
using namespace std;

class Complex
{ float real,imag;
public:
    Complex(float a, float b):
    real(a), imag(b)
    {
       display(real,imag);
           }
    void display(float,float);
};

void Complex::display(float r, float i)
{
    cout<<endl<<r<<"+"<<i<<"i";
}

main()
{
    Complex c1(1,2);

}
