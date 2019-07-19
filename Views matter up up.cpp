#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,m,i,best=0,*arr,sum=0,count=0;

    cin>>n>>m;

    arr = new lli[n+1];

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];

        sum += arr[i];
    }

    sort(arr+1, arr+(n+1));

    for(i=1;i<=n;i++)
    {
        count++;

        if(arr[i]>best)
        {
            best++;
        }
    }

    count += arr[n] - best;

    cout<<(sum - count);
}
