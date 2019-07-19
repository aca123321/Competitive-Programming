#include<iostream>
using namespace std;

int prime(int);

main()
{
    int n,x=0,i=1;

    cin>>n;

    while(x == 0)
    {
        if(prime(n+i) != 0)
            {
                cout<<n+i;
                x++;
            }
        i++;
    }
}

int prime (int n)
{
    int i;

    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            return 0;
        }

         if((i == n-1)&&(n%i != 0))
        {
            return 1;
        }
    }

}
