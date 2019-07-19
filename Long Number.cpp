#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    lli i,n,x,y;
    cin>>n;
    cin>>x;
    y = x;

    lli num[n+1];
    lli arr[10];
    lli nx[n+1];

    for(i=1;i<10;i++)
    {
        cin>>arr[i];
    }

    for(i=n;i>=1;i--)
    {
        num[i] = x%10;
        x /= 10;
        nx[i] = arr[num[i]];
    }

    lli flag = 0;

    i = 1;
    while(i<=n)
    {
        while(nx[i]>=num[i] && i<=n)
        {
            if(nx[i] > num[i])
            {
                flag = 1;
            }
            num[i] = nx[i];
            i++;
        }
        if(flag == 1)
        {
            break;
        }
        else
        {
            if(i<=n && nx[i] <= num[i])
            {
                i++;
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        cout<<num[i];
    }
}
