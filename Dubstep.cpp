#include<iostream>
#include<string>
using namespace std;

main()
{
    string x;
    int n,i,j,a,b=0,c=0;

    cin>>x;
    n = x.length();
    x[n] = '\0';

    for(i=0;i<=(n/3);i++)
    {
        a = x.find("WUB");
        if(a==0)
        {
            c = 1;
        }
        if((a>=3)&&(a<=5))
        {   if(c == 1)
               b = 1;
        }
        if(a>=0)
        {
            x.replace(a,3,"###");
        }
    }

    for(i=2;i<n-1;i++)
    {
        if((x[i-1]=='#')&&(x[i+1] != '#'))
        {
            x[i] =' ';
        }
    }

    for(i=0;i<n;i++)
    {

        if(x[i] != '#')
            {
                if(c == 1)
                {
                    if(x[i] == ' ')
                    {
                        c = 0;
                    }
                }

                else
                    cout<<x[i];
            }
    }

}
