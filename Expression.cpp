#include<iostream>
#include<string>
using namespace std;

main()
{
    int a,b,c,i,j,x,arr[6];

    cin>>a>>b>>c;

    arr[0] = a+b+c;
    arr[1] = a+b*c;
    arr[2] = a*b+c;
    arr[3] = a*b*c;
    arr[4] = (a+b)*c;
    arr[5] = a*(b+c);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(arr[j]>arr[i])
            {
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }

    cout<<arr[0];
}


/*
        ********* BETTER SOLUTION *********

     if(a == 1 && c == 1)
         {output = a + b + c;}

     else if(a == 1 || (b == 1 && a < c))
         {output = (a + b) * c;}

     else if(c == 1 || (b == 1 && a >= c))
         {output = a * (b + c);}

     else{output = a * b * c;}

*/
