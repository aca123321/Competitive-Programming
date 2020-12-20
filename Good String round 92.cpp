#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,c,j,k,l,maxi;

    cin>>t;
    string s;
    vector<vector<lli>> v;
    vector<lli> temp;
    temp.pb(1);
    temp.pb(1);

    while(t--)
    {
        cin>>s;
        n = s.length();
        v.clear();

        if(n == 2)
        {
            cout<<0<<endl;
            continue;
        }

        for(i=0;i<n;i++)
        {
            v.pb(temp);
        }
        if(s[1] == s[0])
        {
            v[1][0] = 2;
        }

        for(i=2;i<n;i++)
        {
            if(s[i] == s[i-1])
            {
                v[i][0] = v[i-1][0] + 1;
            }
            if(s[i] == s[i-2])
            {
                v[i][1] = v[i-2][1] + 1;
            }
        }

        lli maxie = INT_MIN, maxio=INT_MIN;

        for(i=1;i<n;i++)
        {
            maxie = max(maxie, min(v[i][1],v[i-1][1]));
            maxio = max(maxio, v[i][0]);
        }

        cout<<2*maxie<<" and "<<maxio<<endl;
        if(2*maxie >= maxio)
        {
            cout<<n-maxie<<endl;
        }
        else
        {
            cout<<n-maxio<<endl;
        }

    }

}
