#include<iostream>
#include<string>
using namespace std;

main()
{
    string x,y;
    int n,i,j,a=0;

    getline(cin,x);
    n = x.length();

    for(i=0;i<n;i++)
    {
        if((x[i]>96)&&(x[i]<123))
        {
            a++;
            for(j=i+1;j<n;j++)
        {
            if(x[j] == x[i])
            {
                x[j] = '#';
            }
        }
        }
    }

    cout<<a;
}
