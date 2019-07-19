#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,t,i,flag;

    lli arr[1001],brr[1001];
    cin>>t;

    while(t--)
    {
        cin>>n;
        flag = 0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
        }

        sort(arr,arr+n);
        sort(brr,brr+n);

        for(i=0;i<n;i++)
        {
            if(brr[i]<=arr[i])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            cout<<"LOSE\n";
        }
        else
        {
            cout<<"WIN\n";
        }
    }
}
