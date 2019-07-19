#include<iostream>
#include<string>
using namespace std;

main()
{
    int n,i,x=1;
    string str;

    cin>>n>>str;

    for(i=1;i<n;i++)
    {
        if(str[i] == str[0])
            x++;
    }

    if(x>n-x)
    {
        if(str[0] == 'A')
            cout<<"Anton";

        else
            cout<<"Danik";
    }

    else if(x<(n-x))
    {
        if(str[0] == 'A')
            cout<<"Danik";

        else
            cout<<"Anton";
    }

    else
        cout<<"Friendship";

}
