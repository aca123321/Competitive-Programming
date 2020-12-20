#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,c,j,t,mini;

    cin>>t;
    lli arr[101];

    while(t--)
    {
        b = 0;
        cin>>n;
        mini = INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            mini = min(mini, arr[i]);
        }
        if(arr[0]%2 != 0)
        {
            a = 0;
        }
        else
        {
            a = 1;
        }
        for(i=1;i<n;i++)
        {
            if(arr[i]%2 == a)
            {
                cout<<"NO\n";
                b = 1;
                break;
            }
        }

        if(b != 1)
        {
            cout<<"YES\n";
        }
    }



}
