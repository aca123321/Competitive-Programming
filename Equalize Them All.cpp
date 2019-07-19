#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second
#define pb push_back

main()
{
    lli n,i,mode,maxi=INT_MIN,k;
    cin>>n;
    lli arr[n],brr[n],crr[n];
    map<lli , lli> m;
    vector<lli> v;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }

    for(auto it: m)
    {
        if(it.s > maxi)
        {
            maxi = it.s;
            mode = it.f;
        }
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] == mode)
        {
            v.pb(i);
        }
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] > mode)
        {
            brr[i] = 2;
        }

        else if(arr[i] < mode)
        {
            brr[i] = 1;
        }

        else
        {
            brr[i] = 0;
        }
    }

    k = n-maxi;
    cout<<k<<endl;

    i = v[0]-1;

    while(i<v[0] && i>=0)
    {
        if(arr[i]>mode)
        {
            cout<<2<<" "<<i+1<<" "<<i+2<<endl;
        }
        else if(arr[i]<mode)
        {
            cout<<1<<" "<<i+1<<" "<<i+2<<endl;
        }

        i--;
    }

    i = v[0]+1;

    while(i>v[0] && i<n)
    {
        if(arr[i]>mode)
        {
            cout<<2<<" "<<i+1<<" "<<i<<endl;
        }
        else if(arr[i]<mode)
        {
            cout<<1<<" "<<i+1<<" "<<i<<endl;
        }
        i++;
    }
}
