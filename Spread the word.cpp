#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int t,i,n,*arr,*sum,count;

    cin>>t;

    while(t--)
    {
        cin>>n;
        arr = new long long int[n];
        sum = new long long int[n];

        cin>>arr[0];
        sum[0] = arr[0];

        for(i=1;i<n;i++)
        {
            cin>>arr[i];
            sum[i] = sum[i-1] + arr[i];
        }

        count = 1;

        for(i=0;i<n;i++)
        {
            if(count >= n)
            {
                break;
            }

            count += sum[count - 1];
        }

        cout<<i<<endl;
    }
}
