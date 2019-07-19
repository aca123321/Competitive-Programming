#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,min=INT_MAX,ind,a;

    cin>>n;
    int arr[n+1];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    arr[n] = arr[0];

    for(i=1;i<=n;i++)
    {
        a = arr[i] - arr[i-1];

        if(a<0)
        {
            a = -1*a;
        }

        if(a < min)
        {
            min = a;
            ind = i;
        }
    }

    if(ind == n)
    {
        cout<<n<<" "<<1;
    }

    else
    {
        cout<<ind<<" "<<ind+1;
    }
}
