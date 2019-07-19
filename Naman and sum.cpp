#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t,n,s,i,k,*arr,sum;

    cin>>t;

    while(t--)
    {
        cin>>n>>s>>k;

        arr = new lli[n];
        sum = 0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }

        if(sum>=s)
        {
            cout<<"0\n";
        }

        else
        {
            if((s-sum)%k == 0)
            {
                cout<<((s-sum)/k)<<"\n";
            }

            else
            {
                cout<<((s-sum)/k)+1<<"\n";
            }
        }
    }
}
