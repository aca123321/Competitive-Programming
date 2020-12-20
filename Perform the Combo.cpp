#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,m,c;
    map<char,lli> f;
    cin>>t;
    string s,alp="abcdefghijklmnopqrstuvwxyz";

    while(t--)
    {
        cin>>n>>m;
        lli arr[n+1];
        cin>>s;
        f.clear();

        for(i=0;i<=n;i++)
        {
            arr[i] = 0;
        }
        arr[n] = 1;

        for(i=0;i<m;i++)
        {
            cin>>a;
            arr[a-1]++;
        }

        for(i=n-1;i>=0;i--)
        {
            arr[i] += arr[i+1];
        }

        for(i=0;i<n;i++)
        {
            f[s[i]] += arr[i];
        }

        for(i=0;i<26;i++)
        {
            cout<<f[alp[i]]<<" ";
        }
        cout<<endl;

    }

}
