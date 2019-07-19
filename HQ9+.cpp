#include<iostream>
#include<string>
using namespace std;

main()
{
    int n,i,a;
    string x;

    a=0;
    getline(cin,x);
    n = x.length();

    for(i=0;i<n;i++)
    {
        if((x[i]==72) || (x[i]==81) || (x[i]==57))
        {
           cout<<"YES";
           a = 1;
           break;
        }
    }

    if(a==0)
        cout<<"NO";
}
