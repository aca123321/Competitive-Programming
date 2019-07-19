#include<stdio.h>

struct activity
{
    int start,fin,index;
};

void act_sel(int, struct activity*);

main()
{
    int n,i;
    struct activity *act;

    printf("Enter the number of activities\n");
    scanf("%d",&n);

    act =(struct activity*) malloc (n*(sizeof(struct activity)));

    for(i=0;i<n;i++)
    {
        printf("Enter start time for activity %d\n",i+1);
        scanf("%d",&((*(act + i)).start));

        printf("Enter finish time for activity %d\n",i+1);
        scanf("%d",&((*(act + i)).fin));

        (*(act + i)).index = i+1;
    }

    act_sel(n,act);
}


void act_sel(int n, struct activity* act)
{
    int i,j,pre;

    struct activity temp;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( ((*(act + j)).fin) < ((*(act + i)).fin) )
            {
                temp = *(act + j);
                *(act + j) = *(act + i);
                *(act + i) = temp;
            }
        }
    }

    printf("Activity number %d selected\n",(*(act)).index);
    pre = (*(act)).fin;

    i = 1;

    while(i<n)
    {
        if((*(act + i)).start > pre)
        {
            printf("Activity number %d selected\n",(*(act + i)).index);
            pre = (*(act + i)).fin;
        }

        i++;
    }
}
