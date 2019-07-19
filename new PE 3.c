#include<stdio.h>
int p(long long int);
main()
{
    long long int i=2,n;

    printf("enter a number you want to find the largest prime factor of\n");
    scanf("%lld",&n);

    while(i<=n)
    {
        if(n%i==0) // if i is a factor of number
            {
            if(p(i)) // if i is a prime factor of number
              {
               if(i==n) // if i is the greatest prime factor of number
               {printf("Required answer is %lld",i);
               break;}
                   else
               {
                   n=n/i;
                   i=2;
               }
               }
            else
                i++;}

        else
            i++;}

            }

int p(long long int x)
{
    int j;

    for(j=2;j<=x;j++)
    {
        if(j==x)
            return(1);
        else if(x%j==0)
            return(0);
    }
}

