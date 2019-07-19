#include<stdio.h>

void rodcut(int, int*);

main()
{
    int *value, n,i;

    printf("Enter the length of the rod\n");
    scanf("%d",&n);

    value = (int*)malloc((n+1)*(sizeof(int)));

    *(value) = 0;

    for(i=1;i<=n;i++)
    {
        printf("Enter the cost of %d length of rod\n",i);
        scanf("%d",(value + i));
    }

    rodcut(n,value);
}


void rodcut(int n, int* value)
{
    int *max, i, j;

    max = (int*)malloc((n+1)*sizeof(int));

    for(i=0;i<=n;i++)
    {
        max[i] = 0;
    }

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if((max[i-j] + value[j])  > max[i])
            {
                max[i] = (max[i-j] + value[j]);
            }
        }
    }

    printf("Maximum profit earned for length %d of the rod is %d",n,max[n]);
}
