#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb(x) push_back(x)
vector<lli> v[200003];

main()
{
    lli n,i,k,*arr,ans=0,flag,j,l;
    string s;
    cin>>n>>k;
    arr = new lli[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>s;

    i=0;
    j=0;
    while(i<n)
    {
        flag = 0;

        while(s[i] == s[i+1])
        {
            v[j].pb(arr[i]);
            i++;
            flag = 1;
        }

        if(flag == 1)
        {
            v[j].pb(arr[i]);
        }

        else
        {
            v[j].pb(arr[i]);
        }
        j++;
        i++;
    }

    for(i=0;i<j;i++)
    {
        if(v[i].size()>k)
        {
            sort(v[i].begin(),v[i].end(),greater<int>());

            for(l=0;l<k;l++)
            {
                ans += v[i][l];
            }
        }

        else
        {
            for(l=0;l<v[i].size();l++)
            {
                ans += v[i][l];
            }
        }
    }

    cout<<ans;
}
