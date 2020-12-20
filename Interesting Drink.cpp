#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,q;
    cin>>n;

    lli arr[100001]={0};

    for(i=0;i<n;i++)
    {
        cin>>a;
        arr[a]++;
    }
    cin>>q;
    for(i=1;i<100001;i++)
    {
        arr[i] += arr[i-1];
    }

    for(i=0;i<q;i++)
    {
        cin>>a;
        if(a>=100000)
        {
            cout<<arr[100000]<<endl;
        }
        else
        {
            cout<<arr[a]<<endl;
        }

    }
}
