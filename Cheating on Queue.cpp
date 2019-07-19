#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,j,t,n,k,a,b,l,sum,flag;
    cin>>t;
    int arr[100002];
    int ans[t];

    for(j=0;j<t;j++)
    {
        cin>>n>>k;
        flag = 0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n;i++)
        {
            sum = 0;

            for(l=i;l<n;l++)
            {
                sum += arr[l]/(l-i+1);
            }

            if(sum <= k)
            {
                ans[j] = i+1;
                flag = 1;
                break;
            }
        }

        if(flag != 1)
        {
            ans[j] = n+1;
        }
    }

    for(j=0;j<t;j++)
    {
        cout<<ans[j];

        if(j != (t-1))
        {
            cout<<endl;
        }
    }
}
