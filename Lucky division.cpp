#include<iostream>
using namespace std;

main()
{
    int n,i,x=0, arr[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};

    cin>>n;

    for(i=0;i<14;i++)
    {
        if(n%arr[i] == 0)
        {
           cout<<"YES";
           x=1;
           break;
        }

    }

    if(x == 0)
    {
        cout<<"NO";
    }

}

