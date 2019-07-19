#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

main()
{
    lli n,i,q,a,b,ans=0;
    lli arr[3];
    cin>>q;

    while(q--)
    {
        cin>>a;
        ans = 0;
        for(i=0;i<3;i++)
        {
            arr[i] = 0;
        }

        while(a%2 == 0)
        {
            a/=2;
            arr[0]++;
        }

        while(a%3 == 0)
        {
            a/=3;
            arr[1]++;
        }

        while(a%5 == 0)
        {
            a/=5;
            arr[2]++;
        }

        if(a != 1)
        {
            cout<<-1<<endl;
        }
        else
        {
            ans += arr[0] + (2*arr[1]) + (3*arr[2]);
            cout<<ans<<endl;
        }
    }




}
