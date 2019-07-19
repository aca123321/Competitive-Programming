#include<iostream>
using namespace std;

main()
{
    int t,a,b,i,k,ar,count;

    cin>>t;

    for(k=0;k<t;k++)
    {
        i=0;
        ar = 0;
        cin>>a>>b;

        if((a == 0) || (b == 0))
        {
            cout<<"0"<<endl;
        }

        else
        {
            while((i<=a)&&(i<=b))
            {
                ar += (a-i+1)*(b-i+1)*(i*i);
                i++;
            }

            cout<<ar<<endl;
        }

    }


}
