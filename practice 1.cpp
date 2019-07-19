#include<bits/stdc++.h>
using namespace std;
bool comp(string a, string b);

main()
{
    int i,j;
    char k='0';
    string str[3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           str[i][j] = k++;
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cout<<str[i][j]<<endl;
        }
    }

    cout<<endl;

    sort(str,str+3,comp);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cout<<str[i][j]<<endl;
        }
    }

}


bool comp(string a, string b)
{
    int i=0,na,nb,min;
    na = a.length();
    nb = b.length();

    min = (na<=nb)?na:nb;

    cout<<"minimum length is "<<min<<endl;

    while(1)
    {
        if(a[i] > b[i])
        {
            return true;
        }

        else if(a[i] < b[i])
        {
            return false;
        }

        else
        {
            if(i == min-1)
            {
                if(na >= min)
                {
                    return true;
                }

                else
                {
                    return false;
                }
            }

        }

        i++;
    }
}
