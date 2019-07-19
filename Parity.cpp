#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb(x) push_back(x)
#define f first
#define s second

main()
{
    lli i,j,n,k,b,a,c,d;

    cin>>b>>k;
    b = b%10;
    lli arr[10][5];
    lli ar[k];

    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            a = pow(i,j);
            arr[i][j] = a%10;
        }
    }

    a = 0;

    for(i=0;i<k;i++)
    {
        cin>>ar[i];

        if((k-1-i)%4 != 0)
        {
            c = (arr[b][((k-1-i)%4)]);
        }

        else
        {
            if(k-1-i == 0)
            {
                c = 1;
            }

            else
            {
                c = arr[b][4];
            }
        }

        a += (c*ar[i])%10;
    }

    a = a%10;

    if(a%2 == 0)
    {
        cout<<"even";
    }

    else
    {
        cout<<"odd";
    }
}
