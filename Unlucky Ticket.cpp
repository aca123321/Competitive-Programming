#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,a,b,x;
    string s;
    cin>>n;
    cin>>s;
    lli arr[2*n];
    lli flag=0;

    for(i=0;i<(2*n);i++)
    {
        arr[i] = int(s[i]) - int('0');
    }

    sort(arr,arr+n);
    sort(arr+n,arr+(2*n));

    if(arr[0]<arr[n])
    {
        flag=1;
    }
    else if(arr[0]>arr[n])
    {
        flag=2;
    }

    if(flag == 0)
    {
        cout<<"NO";
        return 0;
    }

    if(flag == 1)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]>=arr[n+i])
            {
                cout<<"NO";
                return 0;
            }
        }
    }

    else
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]<=arr[n+i])
            {
                cout<<"NO";
                return 0;
            }
        }
    }

    cout<<"YES";
}
