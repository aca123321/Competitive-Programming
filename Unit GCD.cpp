#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    lli n,i,t,a,b,c;
    scanf("%lli",&t);

    while(t--)
    {
        scanf("%lli",&a);

        if(a <= 3)
        {
            printf("1\n");
            printf("%lli ",a);

            for(i=1;i<=a;i++)
            {
                printf("%lli ",i);
            }
            printf("\n");
        }
        else if(a > 3 && a <= 5)
        {
            printf("2\n");
            printf("3 ");
            for(i=1;i<=3;i++)
            {
                printf("%lli ",i);
            }
            printf("\n");
            printf("%lli ",a-3);
            for(i=4;i<=a;i++)
            {
                printf("%lli ",i);
            }
            printf("\n");
        }
        else
        {
            printf("%lli\n",2+((a-4)/2));
            printf("3 ");
            for(i=1;i<=3;i++)
            {
                printf("%lli ", i);
            }
            printf("\n");
            printf("2 ");
            for(i=4;i<=5;i++)
            {
                printf("%lli ", i);
            }
            printf("\n");
            b = (a)%2;
            c = (a-4)/2;

            if(b == 1)
            {
                for(i=0;i<c;i++)
                {
                    printf("2 ");
                    printf("%lli %lli", (5+(i*2))+1,(5+(i*2))+2);
                    printf("\n");
                }
            }
            else
            {
                for(i=0;i<c-1;i++)
                {
                    printf("2 ");
                    printf("%lli %lli", (5+(i*2))+1,(5+(i*2))+2);
                    printf("\n");
                }
                i--;
                printf("1 %lli", (5+(i*2))+3);
                printf("\n");
            }
            printf("\n");
        }

    }
}
