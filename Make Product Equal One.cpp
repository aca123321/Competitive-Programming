#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a=0,j,k,b,c,o=0,mo=0;

    cin>>n;
    lli arr[n],brr[n][2];
    vector<lli> v;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[i][0] = abs(arr[i] - 1);
        a += brr[i][0];
        brr[i][1] = abs(-1 - arr[i]);
        if(arr[i] == 1)
        {
            o++;
        }
        else if(arr[i] == -1)
        {
            mo++;
        }
        else
        {
            c++;
        }
        if(brr[i][0]-brr[i][1] >= 0)
        {
            v.pb(brr[i][0]-brr[i][1]);
        }
    }

    sort(v.begin(),v.end(),greater<int>());
    b = ((v.size())/2)*2;

    if(n%2 == 0)
    {
        for(i=0;i<b;i++)
        {
            a -= v[i];
        }
    }
    else
    {
        for(i=0;i<b;i++)
        {
            a -= v[i];
        }
    }

    cout<<a;

}
