#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli pfact(lli);

main()
{
    lli t,n,i,j,q;

    cin>>t;

    while(t--)
    {
        cin>>n>>q;

        if(n%q != 0)
        {
            cout<<"0\n";
        }



        else
        {
           cout<<pfact((n/q))<<endl;
        }
    }



}

lli pfact(lli n)
{
    lli num = 0,ans=1,i,temp;

    temp = n;

    while(n%2 == 0)
    {
        n = n/2;
        num++;
    }

    if(num != 0)
    {
        ans = num+1;
    }

    for(i=3;i<=sqrt(temp);i+=2)
        {
            num = 0;

            while((n%i)==0)
            {
                num++;
                n = (n/i);
            }

            if(num != 0)
            {
                ans = ans*(num+1);
            }
        }

    if(n > 2)
    {
        ans *= 2;
    }

    return ans;
}
