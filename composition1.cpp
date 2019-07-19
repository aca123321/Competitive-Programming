#include<iostream>
#include<string>
using namespace std;

class birthday
{ int day, month, year;

public:

    birthday(int d, int m, int y)
    {
        day=d;
        month=m;
        year=y;
    }

    void printbd();

};

void birthday::printbd()
{
   cout<<"Birthday is on "<<day<<"-"<<month<<"-"<<year<<endl;
}

class people //people have birthdays
{
   string name;
   birthday dob_obj; //people will have a dob_obj variable of birthday class data type

   public:
       people(string x, birthday b) /*1)b is passed as a birthday data type (ie.pass an object of the class you're borrowing attributes from and then use that object to access its class attributes) and
                                      2)when an object is borrowed from another class, member initialisation is used */
       : name(x), dob_obj(b)
       {
           printinfo();
       }

       void printinfo()
       {
           cout<<"Name is "<<name<<" and ";
           dob_obj.printbd();
       }
};

main()
{
    birthday bobj(3,8,1998);

    people yaseen("Yaseen",bobj);
}
