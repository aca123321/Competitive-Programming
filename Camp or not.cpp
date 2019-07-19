#include<bits/stdc++.h>
using namespace std;

main()
{
    int t,n,i,days,arr[32],sum[32],d,req,da,num;

    cin>>t;

    while(t--)
    {
        cin>>days;

        for(i=0;i<32;i++)
        {
            arr[i] = 0;
        }

        for(i=0;i<days;i++)
        {
            cin>>da>>num;
            arr[da] = num;
        }

        for(i=2;i<32;i++)
        {
            arr[i] += arr[i-1];
        }

        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>d>>req;

            if(arr[d] < req)
            {
                cout<<"Go Sleep\n";
            }

            else
            {
                cout<<"Go Camp\n";
            }
        }
    }
}
