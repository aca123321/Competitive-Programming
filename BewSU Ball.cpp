#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,*boys,*girls,count=0;

    scanf("%d",&n);
    boys = new int[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",(boys+i));
    }

    scanf("%d",&m);
    girls = new int[m];

    for(i=0;i<m;i++)
    {
        scanf("%d",(girls+i));
    }

    sort(boys,boys+n);
    sort(girls,girls+m);

    j=0;

    for(i=0;i<n;i++)
    {
        while(j<m)
        {
            if((boys[i]-2)<girls[j] && girls[j]<(boys[i]+2))
            {
                count++;
                girls[j++] = -1;
                break;
            }

            else if(girls[j]>=(boys[i]+2))
            {
                break;
            }
        }
    }

    printf("%d",count);

    return 0;
}
