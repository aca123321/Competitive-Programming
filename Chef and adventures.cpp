#include<iostream>
using namespace std;

main()
{
    long long int t,i,n,m,x,y,*arr,flag;

    cin>>t;

    arr = new long long int[t];

    for(i=0;i<t;i++)
    {
        cin>>n>>m>>x>>y;

        flag = 0;

        if((n>=2)&&(m>=2))
        {
            if(((n-2)%x == 0) && ((m-2)%y == 0))
            {
                flag++;
            }
        }

        if((n>=1)&&(m>=1))
        {
            if(((n-1)%x == 0) && ((m-1)%y == 0))
            {
                flag++;
            }
        }

        if(flag != 0)
        {
            arr[i] = 1;
        }

        else
        {
            arr[i] = 0;
        }
    }

    for(i=0;i<t;i++)
    {
       if(arr[i] == 1)
       {
           cout<<"Chefirnemo"<<endl;
       }

       else
       {
           cout<<"Pofik"<<endl;
       }
    }
}
