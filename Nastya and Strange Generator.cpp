#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define pb push_back
#define sec second

main()
{
    lli n,i,t,a,b,c,j,k,start,last,flag;

    cin>>t;
    lli arr[100002],v[100002];
    map<lli,lli> m;


    while(t--)
    {
        cin>>n;
        m.clear();

        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
            m[arr[i]] = i;
            v[i] = 0;
        }
        a = 1;
        flag = 0;
        while(a <= n)
        {
            b = m[a];
            while(b<=n && v[b]==0)
            {
                if(arr[b] != a)
                {
                    flag = 1;
                    break;
                }
                v[b] = 1;
                b++;
                a++;
            }
            if(flag == 1)
            {
                break;
            }
        }

        if(flag == 1)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }

    }



}
