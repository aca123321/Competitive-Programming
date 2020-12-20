#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,c,j,t,mini;
    lli arr[5000];
    cin>>t;

    while(t--)
    {
        cin>>n;
        c = 0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n-2;i++)
        {
            a = i;
            for(j=n-1;j>=i;j--)
            {
                if(arr[j] == arr[i])
                {
                    b = j;
                    break;
                }
            }
            if((b-a)>=2)
            {
                cout<<"YES\n";
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            cout<<"NO\n";
        }
    }

}
