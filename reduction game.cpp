#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,n,m,i,j,*arr,k,sum,a,ans;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        sum = 0;
        ans = 0;

        arr = new lli[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        for(i=0;i<n;i++)
        {
            if(arr[i] > k)
            {
                j = a = i;
                break;
            }
        }

        while(j < n)
        {
            sum += arr[j] - k;
            arr[j] = k;
            j++;
        }

        ans = (k*(n-a)) + (sum%2);

        for(i=0;i<a;i++)
        {
            ans += arr[i];
        }

        cout<<ans<<endl;
    }

}



