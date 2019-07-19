#include<bits/stdc++.h>
using namespace std;

#define lli unsigned long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli t,i,w,j,a,b,k,maxint,x,sum;
    maxint = round(pow(2,63));
    cin>>t>>w;
    lli arr[7]={0};
    lli diff[6] = {0};
    lli n[7]={0};

    for(k=0;k<t;k++)
    {
        sum = 0;

        if(w == 6)
        {
            for(i=1;i<7;i++)
            {
                cout<<i;
                fflush(stdout);
                cin>>arr[i];
                fflush(stdin);
            }

            diff[0] = arr[1];

            for(i=1;i<6;i++)
            {
                diff[i] = arr[i+1] - arr[i];
            }

            for(i=2;i<6;i++)
            {
                n[i+1] = diff[i]- (2*(diff[i-1]));
                sum += n[i+1];
            }

            x = diff[0] + diff[1];
            x -= diff[2];
            x -= (n[4] + n[5] + n[6]);
            n[1] = -1*(x);

            for(i=1;i<7;i++)
            {
                cout<<n[i]<<" ";
            }
            cout<<endl;
            fflush(stdout);
            cin>>a;
            fflush(stdin);
            if(a == 1)
            {
                continue;
            }
            else
            {
                break;
            }
        }

        else
        {
            cout<<1;
            cin>>a;
            cout<<6;
            cin>>a;
            cout<<"1 2 3 4 5 6"<<endl;
        }
    }
}
