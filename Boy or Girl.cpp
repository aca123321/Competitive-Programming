#include<iostream>
#include<string>
using namespace std;

int dist_char(string, int);

main()
{
    int n,a;
    string x;

    cin>>x;
    n = x.length();

    a = dist_char(x, n);

    if(a%2 == 0)
    {
        cout<<"CHAT WITH HER!";
    }

    else
    {
        cout<<"IGNORE HIM!";
    }
}

int dist_char(string x, int n)
{
    int i,j,k,count=0;

    for(i=0;i<n;i++)
    {
        if(x[i] != '#')
        {
            for(j=i+1;j<n;j++)
            {
                if(x[j] == x[i])
                    x[j] = '#';
            }
        }
    }

    for(i=0;i<n;i++)
    {
        if(x[i] != '#')
            count++;
    }

    return count;
}
