#include <_mingw.h>
#include<bits/stdc++.h>

using namespace std;

void Person::getData()
{
    cout<<"Enter you name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
}

void Person::display()
{
    cout<<"Your name is "<<name<<" and your age is "<<age<<" years\n";
}
