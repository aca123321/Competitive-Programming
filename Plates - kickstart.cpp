#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

lli n,k,p;
vector<vector<lli>> v;
map<vector<lli>, lli> m;

lli solve(lli* rem, lli count)
{
    lli maxi = INT_MIN, a,i,j;

    vector<lli> remvect;

    for(i=0;i<n;i++)
    {
        remvect.pb(rem[i]);
    }

    if(m[remvect] != 0)
    {
        return m[remvect];
    }

    if(count == 1)
    {
        for(i=0;i<n;i++)
        {
            if(rem[i] != 0)
            {
                a = k - rem[i];
                maxi = max(maxi, v[i][a]);
            }
        }
        m[remvect] = maxi;
        return maxi;
    }
    for(i=0;i<n;i++)
    {
        if(rem[i] != 0)
        {
            rem[i]--;
            a = k - rem[i] - 1;
            maxi = max(maxi,v[i][a] + solve(rem, count-1));
            rem[i]++;
        }
    }
    m[remvect] = maxi;
    return m[remvect];
}

main()
{
    lli i,t,a,b,c,j,l,rem[51];

    cin>>t;

    for(l=1;l<=t;l++)
    {
        v.clear();
        cin>>n>>k>>p;
        for(i=0;i<n;i++)
        {
            vector<lli> temp;
            for(j=0;j<k;j++)
            {
                cin>>a;
                temp.pb(a);
            }
            v.pb(temp);
        }
        for(i=0;i<n;i++)
        {
            rem[i] = k;
        }
        a = solve(rem, p);
        cout<<"Case #"<<l<<": "<<a<<endl;
    }

}
