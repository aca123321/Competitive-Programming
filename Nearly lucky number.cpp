#include<iostream>
#include<string>
#include<sstream>
using namespace std;

main()
{
    int n,i, count=0,y=0;
    string x, num;

    cin>>x;
    n = x.length();

    for(i=0;i<n;i++)
    {
        if((x[i] == '4') || (x[i] == '7'))
            count++;
    }

    ostringstream obj;
    obj << count;
    num = obj.str();

    n = num.length();

    for(i=0;i<n;i++)
    {
        if((num[i] != '4'))
        {
            if(num[i] != '7')
                {
                    cout<<"NO";
                    break;
                }
        }

        if((num[i] != '7'))
        {
            if(num[i] != '4')
                {
                    cout<<"NO";
                    break;
                }
        }

        if(i == n-1)
            y = 1;
    }

    if(y == 1)
        cout<<"YES";
}
