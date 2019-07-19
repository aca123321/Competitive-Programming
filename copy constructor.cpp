#include<iostream>
#include<string.h>
using namespace std;
class Bstring
{ int msize;
  char *content;

  public:
    Bstring(char *c)
    {
      this->msize=strlen(c);
      this->content= new char[msize+1];
      strcpy(this->content,c);

      this->display();
    }


    void display()
    {
        cout<<this->content<<endl;
    }

    ~Bstring()
    {
        delete [] this->content;
        this->content=NULL;
        cout<<"Space was freed\n";
    }
};

main()
{
    Bstring original("aca123321");
    Bstring cpy(original);
    cpy.display();
}
