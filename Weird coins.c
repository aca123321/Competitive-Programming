#include<stdio.h>

main()
{
    long long int i,n,a,m,t,j,b,c;

    scanf("%lli",&t);
    long long int arr[t];

    for(j=0;j<t;j++)
    {
        scanf("%lli%lli",&m,&n);

        for(i=0;i<(m*n);i++)
        {
            scanf("%lli",&a);
        }

        if(n%2 == 0)
        {
            b = (m*n - m + 1);
            c = a*(b);
            arr[j] = c;
        }

        else
        {
            b = m*n;
            c = a*b;
            arr[j] = c;
        }
    }

    for(i=0;i<t;i++)
    {
        printf("%lli",arr[i]);
        if(i != (t-1))
        {
            printf("\n");
        }
    }

}
