#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,n;
    cin>>n;
    lli arr[(2*n)];

    for(i=0;i<(2*n);i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+(2*n));

    if(arr[0] == arr[(2*n)-1])
    {
        cout<<-1;
    }
    else
    {
        for(i=0;i<(2*n);i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
