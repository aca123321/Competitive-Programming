#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,c,m,k,count;

    cin>>t;
    lli arr[200002];
    vector<lli> v;

    while(t--)
    {
        cin>>n>>k;
        count = 0;
        v.clear();

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            arr[i] %= 2;
            if(arr[i] == 1)
            {
                count++;
                v.pb(i+1);
            }
        }

        if(count<k)
        {
            cout<<"NO\n";
        }
        else
        {
            count -= k;

            if(count%2 == 0)
            {
                cout<<"YES\n";
                for(i=0;i<k-1;i++)
                {
                    cout<<v[i+1]-1<<" ";
                }
                cout<<n<<endl;
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}
