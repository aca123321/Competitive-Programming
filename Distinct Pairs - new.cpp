#include<bits/stdc++.h>
using namespace std;

#define lli int

main()
{
    lli n,m,*arr,*brr,i;

    cin>>n>>m;

    arr = new lli[n];
    brr = new lli[m];

    map <lli, lli> ma;
    map <lli, lli> mb;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        ma.insert({arr[i],i});
    }

    for(i=0;i<m;i++)
    {
        cin>>brr[i];
        mb.insert({brr[i],i});
    }

    sort(arr,arr+n);
    sort(brr,brr+m);

    for(i=0;i<n;i++)
    {
        cout<<ma[arr[i]]<<" "<<mb[brr[0]]<<endl;
    }

    for(i=1;i<m;i++)
    {
        cout<<ma[arr[n-1]]<<" "<<mb[brr[i]];

        if(i != m-1)
        {
            cout<<endl;
        }
    }
}
