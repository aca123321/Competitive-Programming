#include<iostream>
using namespace std;

unsigned long long int fact(unsigned long long int);

main()
{
    unsigned long long int n,q,r,i,j,k;
    int t,l;

    cin>>t;

    for(l=0;l<t;l++)
    {
        cin>>l>>r>>q;

        for(j=0;j<q;j++)
        {
            cin>>n;

            for(i=n;i<=r;i++)
            {
                if((fact(i-2)-1)%(i) == 0)
                {
                    cout<<i<<endl;
                    break;
                }

                else if(i == r)
                {
                    cout<<"-1"<<endl;
                }
            }
        }
    }


}

unsigned long long int fact(unsigned long long int x)
{
    if(x == 3)
    {
        return 6;
    }

    return (x*fact(x-1));
}
