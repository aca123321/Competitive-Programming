#include<stdio.h>
#include<string.h>

int main()
{
    int i,n;
    char word[100];

    scanf("%s",&word);
    n=strlen(word);

    for(i=0;i<=n;i++)
    {
        if((word[i]=='A') || (word[i]=='E') || (word[i]=='I') || (word[i]=='O') || (word[i]=='U') || (word[i]=='a') || (word[i]=='e') || (word[i]=='i') || (word[i]=='o') || (word[i]=='u') )
        word[i] = NULL;

        else
        {  if((word[i] >= 'A') && (word[i]<='Z'))
            word[i] = word[i]+32;
        }
    }

    for(i=0;i<n;i++)
    {
        if(word[i]!=NULL)
        {
          printf(".%c",word[i]);
        }

    }


    return 0;
}
