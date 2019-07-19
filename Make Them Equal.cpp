#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define f first
#define s second


main()
{
    int n,i,sum=0;
    cin>>n;
    int arr[n];
    vector<int> v;
    map<int, int> m;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    for(i=0;i<n;i++)
    {
        m[arr[i]]++;
    }

    for(auto it: m)
    {
        v.pb(it.f);
    }

    sort(v.begin(),v.end());

    if(v.size() >= 4)
    {
        cout<<-1;
        return 0;
    }

    else if(v.size() == 1)
    {
        cout<<0;
        return 0;
    }

    else if(v.size() == 3)
    {
        if(v[2]-v[1] == v[1]-v[0])
        {
            cout<<v[2]-v[1];
            return 0;
        }
        else
        {
            cout<<-1;
            return 0;
        }
    }

    else if(v.size() == 2)
    {
        if((v[1]-v[0])%2 == 0)
        {
            cout<<(v[1]-v[0])/2;
            return 0;
        }

        else
        {
            cout<<v[1]-v[0];
            return 0;
        }
    }

    else
    {
        cout<<-1;
        return 0;
    }
}
