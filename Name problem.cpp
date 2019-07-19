#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

main()
{
    string name,*x;
    int count,i,k,n,t;

    cin>>t;
    x = new string[t];

    name = "government college of engineering & textile technology berhampore";
    n = name.length();

    for(k=0;k<t;k++)
    {
        count = 0;
        if(k == 0)
        {
            cin.ignore();
        }
        getline(cin,x[k]);

        for(i=0;i<n;i++)
        {
            if((x[k][i]<91)&&(x[k][i]>64))
            {
                x[k][i] += 32;
            }
        }

        cout<<x[k];

        if(count > 32)
        {
            cout<<"reject"<<endl;
        }

        else
        {
            cout<<"accept"<<endl;
        }

    }
}
