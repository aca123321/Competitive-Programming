#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

unsigned long long int EvilFunction(unsigned long long int l,unsigned long long int );

main()
{
    unsigned long long int t,l,r,a,k,*ans;

    cin>>t;

    ans = new unsigned long long int[t];

    for(k=0;k<t;k++)
    {
        cin>>l>>r;

        a = EvilFunction(l,r);
        a = ans[k];
    }

    for(k=0;k<t;k++)
    {
        cout<<ans[k]<<endl;
    }
}

unsigned long long int EvilFunction(unsigned long long int l,unsigned long long int r)
{
   unsigned long long int sum=0, flag, i,j,k,cantCheckJ;


    for(i=l;i<=r;i++)
    {
        flag=(i==1);

        for(j=2;j< i;j++)
        {
            cantCheckJ=0;
            for(k=2;k<=sqrt(j);k++)
            {
                if(j%k==0)
                {
                    cantCheckJ++;
                }
            }

            if(cantCheckJ==0 && i%j==0)
                {
                    flag=1;
                }
        }


        if(flag==0)
        {
            sum+=pow(i,i);
        }
    }

    return sum;
}
