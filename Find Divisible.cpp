#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,t,l,j,r,flag;

    cin>>t;

    while(t--)
    {
        cin>>l>>r;

        flag = 0;

        if(2*l <= r)
        {
            cout<<l<<" "<<2*l<<endl;
        }

        else
        {
            for(i=l;i<=r;i++)
            {
                for(j=i+1;j<=r;j++)
                {
                    if(j%i == 0)
                    {
                        cout<<i<<" "<<j<<endl;
                        flag = 1;
                        break;
                    }
                }

                if(flag != 0)
                {
                    break;
                }
            }
        }
    }



}
