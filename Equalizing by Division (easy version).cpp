#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,k,j,b,c,x,y,maxi=INT_MIN,count;
    cin>>n>>k;
    lli arr[n],brr[n];
    vector<lli> v;
    map<lli,lli> m,add;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        brr[i] = int(log2(arr[i]));
        maxi = max(maxi,brr[i]);
        //cout<<arr[i]<<" ";
        if(arr[i]%2 != 0)
        {
            add[i]++;
        }
        m[brr[i]]++;
    }

    for(i=0;i<=maxi;i++)
    {
        v.pb(m[i]);
    }


    for(auto it: v)
    {
        cout<<it<<" ";
    }
    /*
    cout<<"#"<<maxi<<endl;
    */

    lli mini = INT_MAX;
    for(i=0;i<=maxi;i++)
    {
        a = 0;
        count = 0;
        count +=
        for(j=i;j<=maxi;j++)
        {
            if(a+v[j] >= k)
            {
                count += (k-a)*(j-i);
                a += (k-a);
                break;
            }
            else
            {
                a += v[j];
                count += (j-i)*v[j];
            }
        }
        if(a==k)
        {
            mini = min(mini,count);
        }
    }

    cout<<mini;
}
