#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

main()
{
    lli n,i,t,a,b,c,ans=0,one,two;
    lli arr[102];
    cin>>t;

    while(t--)
    {
        cin>>n;
        ans = 0;
        one = 0;
        two = 0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            arr[i] = arr[i]%3;
            if(arr[i] == 0)
            {
                ans++;
            }
            else
            {
                if(arr[i] == 1)
                {
                    one++;
                }
                else
                {
                    two++;
                }
            }
        }

        if(one>=two)
        {
            ans += two;
            ans += (one-two)/3;
        }
        else
        {
            ans += one;
            ans += (two-one)/3;
        }

        cout<<ans<<endl;
    }


}
