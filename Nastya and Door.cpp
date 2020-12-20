#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,c,j,t,k,l,r,maxi,ind;
    map<lli,lli> m;
    cin>>t;
    lli arr[200001];

    while(t--)
    {
        cin>>n>>k;
        maxi = 0;
        m.clear();
        l = 0;
        r = l+k-1;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                m[i] = 1;
            }
        }
        a = 0;
        ind = 1;

        for(i=1;i<r;i++)
        {
            if(m[i] == 1)
            {
                a++;
                m[i] = -1;
            }
        }
        maxi = a;
        l = 1;
        r = l+k-1;
        while(l<=n-k)
        {
            a += m[l];
            a += m[r-1];
            m[r-1] = -m[r-1];
            if(a > maxi)
            {
                maxi = a;
                ind = l+1;
            }
            l++;
            r++;
        }

        cout<<maxi+1<<" "<<ind<<endl;

    }

}
