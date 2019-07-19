#include<iostream>
#include<stdio.h>
using namespace std;

int howmany(int, int, int*);

main()
{
    long long n;
    int i, j, l, three, two, one , *ptr, count=0;

    cin>>n;

    ptr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>*(ptr + i);
    }



    count = howmany(4,n,ptr);
    three = howmany(3,n,ptr);
    two = howmany(2,n,ptr);
    one = howmany(1,n,ptr);


    if(three <= one)
    {
        one -= three;
    }

    else
    {
        one = 0;
    }

    count += three;


    if(two%2 == 0)
    {
        count += (two/2);
        two = 0;
    }

    else
    {
        count += (two/2);
        two = 1;

        if(one>=2)
        {
            two = 0;
            one -= 2;
            count++;
        }

        else
        {
            two = 0;
            one = 0;
            count++;
        }

    }

    if(one>=4)
    {
        count += (one/4);
        one = one%4;
    }

    if(one<4 && one>0)
    {
        count++;
        one = 0;
    }


    cout<<count;

}

int howmany(int x, int n, int* arr)
    int i,count=0;

    for(i=0;i<n;i++)
    {
        if(*(arr + i) == x)
        {
            count++;
        }
    }

    return (count);

}
