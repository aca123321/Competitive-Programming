#include<iostream>
using namespace std;

main()
{
    long long int n,m,i,y,x,min,max;

    cin>>n>>m;

    if(m >= 3) //find the number for which x + (x*(x-3)/2) is greater than or equal to m
    {
        x = 3;

        while(1)  // total no. of diagonals of a x sided polygon is x*((x-3)/2)
        {
            y = (x + ((x*(x-3))/2));

            if( y >= m)
            {
                break;
            }
            x++;
        }
        min = x;
    }

    else
    {
        if(m == 0)
        {
            min = 0;
        }

        else
        {
            min = m+1;
        }
    }

    max = 2*m;

    if(max >= n)
    {
        cout<<"0 ";
    }

    else
    {
        cout<<(n - max)<<" ";
    }

    if(min >= n)
    {
        cout<<"0";
    }

    else
    {
        cout<<(n - min);
    }
}
