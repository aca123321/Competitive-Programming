#include<iostream>
#include<string>
#include<sstream>
using namespace std;

main()
{
    long int a,b,t,i,j,nx,ny;
    string x1,x2,y1,y2;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>x1;
        cin>>y1;

        nx = x1.length();
        ny = y1.length();

        j=0;

        for(i=0;i<nx;i++)
        {
            if(x1[i] == '1')
            {
                x2[j] = '1';
                j++;
            }

        }

        j=0;

        for(i=0;i<ny;i++)
        {
            if(y1[i] == '1')
            {
                y2[j] = '1';
                j++;
            }
        }

        stringstream obj1(x2);
        stringstream obj2(y2);

        obj1>>a;
        obj2>>b;

        cout<<a*b<<endl;
    }




}
