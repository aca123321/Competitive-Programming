#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,k,j,maxi = INT_MIN,a=0,b=0,c,d,x;

    cin>>n>>k;
    lli arr[n+1] = {0};

    for(i=1;i<=n;i++)
    {
        cin>>x;

        arr[i] = x;

        if(x == 1)
        {
            a++;
        }

        else
        {
            b++;
        }
    }

    for(i=1;i<=k;i++)
    {
        c = 0;
        d = 0;

        j = i;

        while(j<=n)
        {
            if(arr[j] == 1)
            {
                c++;
            }

            else if(arr[j] == -1)
            {
                d++;
            }

            j += k;
        }

        maxi = max(maxi,abs((a-c)-(b-d)));
    }

    cout<<maxi;
}
