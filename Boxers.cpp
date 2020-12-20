#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,c,j,k,x,y;

    cin>>n;
    a = 0;
    lli arr[n];
    map<lli,lli> m;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(i=0;i<n;i++)
    {
        if(m[arr[i]-1] == 0 && arr[i]-1 > 0)
        {
            m[arr[i]-1]++;
            a++;
        }
        else if(m[arr[i]] == 0)
        {
            m[arr[i]]++;
            a++;
        }
        else if(m[arr[i]+1] == 0)
        {
            m[arr[i]+1]++;
            a++;
        }
    }


    cout<<a;
}
