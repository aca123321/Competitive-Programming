#include<stdio.h>
#include<string.h>

main()
{
    int n,i,ans;
    char a[101], b[101];

    scanf("%s",&a);
    fflush(stdin);

    scanf("%s",&b);
    n = strlen(a);

    for(i=0;i<n;i++)
    {
        if(a[i]<92)
        a[i] += 32;

        if(b[i]<92)
        b[i] += 32;

    }


    for(i=0;i<n;i++)

 {

        if((int)a[i]==(int)b[i])

        ans=0;

        else if((int)a[i]>(int)b[i])

        {ans=1;

               break;}

        else if((int)a[i]<(int)b[i])

        {ans=-1;

               break;}

 }

 printf("%d",ans);
}
