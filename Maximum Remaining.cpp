#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,c,maxi=INT_MIN,mini=INT_MAX;
    cin>>n;
    vector<lli> v;

    for(i=0;i<n;i++)
    {
        cin>>c;
        v.push_back(c);
        if(c>maxi)
        {
            maxi = c;
        }
        if(c<mini)
        {
            mini = c;
        }
    }

    sort(v.begin(),v.end());

    vector<lli> ::iterator a;

    a = lower_bound(v.begin(),v.end(),maxi);

    if(mini == maxi)
    {
        cout<<0;
        return 0;
    }

    else
    {
        cout<<((*(a-1))%(maxi));
    }
}
