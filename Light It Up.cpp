#include<bits/stdc++.h>
using namespace std;

#define lli  long long int

main()
{
    lli n,m,*arr,i,maxa=0,maxb=0,sum=0,tot=0;

    cin>>n>>m;

    arr = new lli[n+3];

    arr[0] = 0;
    arr[n+1] = m;
    arr[n+2] = m;

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<=n+2;i+=2)
    {
        sum += arr[i] - arr[i-1];
    }

    if(sum > (m-sum))
    {
        cout<<sum;
    }

    else
    {
        for(i=1;i<=n+1;i++)
        {
            if(arr[i] - arr[i-1] > maxa && (i%2 != 0))
            {
                maxa = arr[i] - arr[i-1];
            }

            if(arr[i] - arr[i-1] > maxb && (i%2 == 0))
            {
                maxb = arr[i] - arr[i-1];
            }
        }

        if(sum <= (m-sum))
        {
            cout<<(sum+(max(maxa,maxb)-1));
        }
    }
}
