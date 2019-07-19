#include<iostream>
using namespace std;

class c
{ public:
   c(int a)
   :var(a)
   {
   }

   void printvar()
   {
       cout<<"var is "<<var<<endl;
       cout<<"this->var is "<<this->var<<endl;
       cout<<"(*this).var is "<<(*this).var<<endl;
   }

   private:
       int var;
};

main()
{
    c obj(14);
    obj.printvar();
}
