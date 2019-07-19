#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,t,k;
    lli arr[100002],max[100002];
    deque<lli> d;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        d.clear();

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<k;i++)
        {
            while((!d.empty()) && ( arr[i] >= arr[d.back()] ))
            {
                d.pop_back();
            }

            d.push_back(i);
        }

        for(i=0;i<(n-k);i++)
        {
            max[i]
        }
    }

}
