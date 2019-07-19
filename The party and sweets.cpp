#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli nb[100002]={0},ng[100002]={0};

main()
{
    lli i,n,mini=INT_MAX,a,m;
    cin>>n>>m;
    lli arr[n];
    lli brr[m];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        nb[arr[i]]++;
    }
    sort(arr,arr+n,greater<lli>());

    for(i=0;i<m;i++)
    {
        cin>>brr[i];
        ng[brr[i]]++;
    }
    sort(brr,brr+n,greater<lli>());

    for(i=1;i<100002;i++)
    {
        ng[i] += ng[i-1];
        nb[i] += nb[i-1];
    }

    if(brr[m-1] < arr[0])
    {
        cout<<-1;
        return 0;
    }

    if(brr[0]<=arr[n-1])
    {
        cout<<((nb[100001])*m);
        return 0;
    }

    lli b,sat[n];

    if(n>=m)
    {
        b = 100001;

        for(i=0;i<n;i++)
        {
            a = arr[i];
            sat[i] = ng[a];

        }
    }
}
