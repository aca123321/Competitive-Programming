#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define pb push_back
#define mp make_pair

main()
{
    lli n,i,count = 0;
    vector<lli> v;
    string s;

    cin>>n;
    cin>>s;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        arr[i] = (int(s[i])-48);

        if(arr[i]%2 == 0)
        {
            v.pb(i);
        }
    }

    for(auto it: v)
    {
        count += it+1;
    }

    cout<<count;
}
