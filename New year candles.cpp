#include<iostream>
using namespace std;

main()
{
    int a,b,sum=0,burnt=0;

    cin>>a>>b;

    sum += a;
    burnt = a;
    a = 0;

    while((a+burnt)>=b)
    {
        sum += a;
        burnt += a;
        a = 0; //burning
        a += burnt/b;
        burnt = burnt%b; //making new candles from burnt ones

    }

    cout<<sum+a;;
}
