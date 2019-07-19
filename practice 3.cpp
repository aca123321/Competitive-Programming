#include<iostream>
using namespace std;

class c
{
  string name;
  public:
      c(string y)
      {
          cout<<"This statement will get printed automatically as soon as you declare an object from this class\n";
          setname(y);
          cout<<getname();
      }
      void setname(string x)
      {
          name=x;
      }

      string getname()
      {
          return name;
      }
};


main()
{   c a("first object's constructor\n"), b("second object's constructor");

}
