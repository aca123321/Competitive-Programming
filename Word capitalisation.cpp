#include<iostream>
#include<string>
using namespace std;

main()
{
    string x;

    cin>>x;

    if(x[0]>96)
      x[0] -= 32;

    cout<<x;

}
