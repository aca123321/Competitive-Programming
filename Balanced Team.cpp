#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define f first
#define s second

main()
{
    lli i,n,ans,a,maxi;
    cin>>n;
    lli arr[n];

    deque<lli> d;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    d.push_back(arr[0]);
    maxi = 1;
    ans = 1;

    for(i=1;i<n;i++)
    {
        a = arr[i];
        d.pf(a);

        maxi++;

        while(1)
        {
            if(a-d.back() > 5)
            {
                d.pop_back();
                maxi--;
            }

            else
            {
                break;
            }
        }

        ans = max(ans,maxi);
    }

    cout<<ans;

}
