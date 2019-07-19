#include<iostream>
#include<math>
using namespace std;

main()
{
    long long int n,i,j,t,k,count;

    cin>>t;

    for(k=0;k<t;k++)
    {
        cin>>n;

        count = 0;
        j=1;

        if(n == 0)
        {
            cout<<"0"<<endl;
        }

        if(n == 1)
        {
            cout<<"1"<<endl;
        }

        if(n>1)
        {
            count++;

            for(i=2;i<=n;i++)
            {
                while(pow(i,j) <= n)
                {
                    count++;
                    j++;
                }
            }
        }
    }
}
