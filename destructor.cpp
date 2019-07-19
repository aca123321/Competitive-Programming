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
        cout<<this->content;
    }

    ~Bstring()
    {
        delete [] this->content;
        this->content=NULL;
        cout<<"\nSpace was freed";
    }
};

main()
{
    Bstring s("aca123321");
}
