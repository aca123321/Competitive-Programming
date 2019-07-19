#include<iostream>
using namespace std;

class mother //base class or parent class
{
   public:

      mother();
      void sayname();
};


 mother::mother()
 {

 }

void mother::sayname()
{
    cout<<"I am a Roberts"<<endl;
}
class daughter: public mother //derived class (ie. everything public from base class is copied to derived class)
{

};

main()
{
    daughter d1;
    d1.sayname();
}
