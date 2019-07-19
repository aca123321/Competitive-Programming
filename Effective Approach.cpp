#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int n,m,i,a,ca=0,cb=0;

    cin>>n;

    long long int arr[n+1] = {0};

    for(i=0;i<n;i++)
    {
        cin>>a;
        arr[a] = i+1;
    }

    cin>>m;

    while(m--)
    {
        cin>>a;
        ca += arr[a];
        cb += n - arr[a] + 1;
    }

    cout<<ca<<" "<<cb;
}
