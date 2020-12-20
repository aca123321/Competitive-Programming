#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli arr[20]={0),q,i,j,n,t,x,k,lvl;

    cin>>q;

    while(q--)
    {
        cin>>t>>x;
        if(t != 3)
        {
            cin>>k;
            lvl = floor(log(x)/log(2));
            arr[lvl] += k;

            if(t == 2)
            {
                for(i=lvl;i<20;i++)
                {
                    arr[i] += round(pow(2,i-lvl))*k;
                }
            }
        }
        else
        {
            cout<<x;
            for(i=lvl-1;i>=0;i--)
            {
                x =
            }
        }


    }

}
