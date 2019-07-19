#include<iostream>
using namespace std;

class c
{
private:
    int var;
    friend void frnd(c cobj); //could use &cobj in place of cobj

public:
    c(int a)
    {
        var=a;
        cout<<"var is "<<var<<endl;
    }
};

void frnd(c cobj) //could use &cobj in place of cobj
{
  cobj.var=99;
  cout<<"var is "<<cobj.var<<endl;
}

main()
{
    c obj(10);
    frnd(obj);
}
