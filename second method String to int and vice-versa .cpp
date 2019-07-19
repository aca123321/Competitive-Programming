#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

// Work only if compiler supports C++11 or above.
// patch downloaded from http://tehsausage.com/mingw-to-string to use this stoi

main()
{
    string str1 = "45";
    string str2 = "3.14159";
    string str3 = "31337 geek";
    const char *stra = "42";
    const char *strb = "3.14159";
    const char *strc = "31337 geek";

    int a = stoi(str1);
    int b = stoi(str2);
    int c = stoi(str3);

    int num1 = atoi(stra);
    int num2 = atoi(strb);
    int num3 = atoi(strc);


    cout << "stoi(\"" << str1 << "\") is "<< a << '\n';
    cout << "stoi(\"" << str2 << "\") is "<< b << '\n';
    cout << "stoi(\"" << str3 << "\") is "<< c << '\n';
    cout << "atoi(\"" << stra << "\") is " << num1 << '\n';
    cout << "atoi(\"" << strb << "\") is " << num2 << '\n';
    cout << "atoi(\"" << strc << "\") is " << num3 << '\n';
}
