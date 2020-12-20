#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli arr[1001];

main()
{
    lli n,i,t,a,b,c,count=0;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        a = 1;
        count = 1;
        for(i=1;i<n-1;i++)
        {
            if(a + arr[i] < arr[i+1])
            {
                a += arr[i];
                count++;
            }
        }

        if(n == 2)
        {
            count = 2;
        }
        cout<<count+1<<endl;
    }
}
