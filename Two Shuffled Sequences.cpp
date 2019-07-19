#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i;
    cin>>n;
    lli arr[n];
    vector<lli> vi,vd;
    map<lli , lli> m;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }

    for(auto it: m)
    {
        if(it.s > 2)
        {
            cout<<"NO"<<endl;
            return 0;
        }

        else if(it.s == 2)
        {
            vi.pb(it.f);
            vd.pb(it.f);
        }

        else if(it.s == 1)
        {
            vi.pb(it.f);
        }
    }

    sort(vi.begin(),vi.end());
    sort(vd.begin(),vd.end(),greater<int>());

    cout<<"YES"<<endl;
    cout<<vi.size()<<endl;
    for(auto it: vi)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<vd.size()<<endl;
    for(auto it: vd)
    {
        cout<<it<<" ";
    }

}
