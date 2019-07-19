#include<stdio.h>

main()
{
    int n,tot=0,i,j,k,temp,min = 9999999,ind,*at,*wt,*rem,*tat,*ct,*bt;

    printf("Enter the number of jobs to schedule\n");
    scanf("%d",&n);

    at = (int*)malloc(n*(sizeof(int)));
    tat = (int*)malloc(n*(sizeof(int)));
    wt = (int*)malloc(n*(sizeof(int)));
    rem = (int*)malloc(n*(sizeof(int)));
    ct = (int*)malloc(n*(sizeof(int)));
    bt = (int*)malloc(n*(sizeof(int)));

    printf("Enter the arrival time of the jobs in order\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&(at[i]));
        wt[i] = 0;
    }

    printf("Enter the burst time of the jobs in order\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&(bt[i]));
        rem[i] = bt[i];
        tot += bt[i];
    }

    min = rem[0];
    ind = 0;

    for(i=0;i<n;i++)
    {
        printf("JOB %d:\n",i+1);
        printf("AT: %d, BT: %d, rem: %d\n",at[i],bt[i],rem[i]);
    }


    printf("\nScheduling of jobs at each unit of time is as follows:\n");
    for(i=0;i<tot;i++)
    {
        for(j=0;j<n;j++)
        {
            if(rem[j] != -1)
            {
                if(rem[j] < min && (at[j] <= i))
                {
                    min = rem[j];
                    ind = j;
                }
            }
        }

        rem[ind]--;
        printf("%d - %d : job %d\n",i,i+1,ind+1);

        if(rem[ind] == 0)
        {
            rem[ind] = -1;
            ct[ind] = i+1;
            min = 9999999;
        }
    }

    printf("\n\n");
    for(i=0;i<n;i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        printf("JOB %d:\n",i+1);
        printf("CT: %d, TAT: %d, WT: %d\n",ct[i],tat[i],wt[i]);
    }
}
