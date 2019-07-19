#include<iostream>
using namespace std;

main()
{
    int y,i = 1,a,b,c,d;

    cin>>y;

    while(i>0)
    {
        y += i;

        d = y%10;
        c = (y/10)%10;
        b = (y/100)%10;
        a = y/1000;

        if((a != b)&&(a != c)&&(a != d)&&(b != c)&&(b != d)&&(c != d))
        {
            cout<<y;
            break;
        }
    }
}
