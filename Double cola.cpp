#include<iostream>
#include<math.h>
using namespace std;

main()
{
    long long int x,n,rem;
    int i,counter=0,a,b;
    cin>>n;

    i = 1;
    x = 5*i;
    counter++;

    while(x <= n)
    {
        if(x == n)
        {
            break;
        }

        else
        {
            i *= 2;
            x += 5*i;
        }

        counter++ ;
    }

    // cout<<counter; //pinpoints the set number
    // counter gives the index to which 2 is raised (also the number of a particular guy in the line)

    a = pow(2,counter-1); // number of people of a particular person in the set
    rem = n - (5*(pow(2,counter-1) - 1));

    // cout<<rem;
    if(a != 1)
        b = (rem/a)+1;

    else
        b = rem/a;

    if(b == 1)
        cout<<"Sheldon";

    else if(b == 2)
        cout<<"Leonard";

    else if(b == 3)
        cout<<"Penny";

    else if(b == 4)
        cout<<"Rajesh";

    else
        cout<<"Howard";


}

