#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb(x) push_back(x)
#define f first
#define s second

int main()
{
    lli a=0,b=0,c=0,d=0;
    long long int i,j,n,m,k,*fin;

    cin>>n>>m>>k;
    lli arr[n],brr[n-1];
    lli dp[n+1][n+1]={0,0};
    lli flag[n-1] = {0}, lli flagg[n-1] = {0};

    vector< pair <lli , lli> > v,vv;
    pair temp;
    multiset< lli > s;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        brr[i] = arr[i+1] - arr[i] - 1;
        temp.f = brr[i];
        temp.s = i;
        v.pb(temp);
    }

    if(k >= n)
    {
        cout<<n;
        return 0;
    }

    for(i=0;i<=n;i++)
    {
        dp[i][n] = 1;
    }

    sort(v.begin(),v.end());

    a = 0;

    for(i=1;i<=(n-k);i++)
    {
        for(auto it: v)
        {
            if(flagg[it->s] == 0)
            {
                flagg[(it->s)] = 1;
                a += brr[(it->s)];
                break;
            }

/*
            if(flag[it->s] < 2 && flag[(it->s)+1] == 0 && flagg[it->s] == 0)
            {
                flag[(it->s)+1] = 1;
                flag[(it->s)] = 1;
                flagg[(it->s)] = 1;
            }
*/
        }
    }

    d = 0;

    for(auto it : v)
    {
        if(flagg[(it->s)] != 1)
        {
            vv.pb(it);
            d++;
        }
    }

    sort(vv.begin(),vv.end());

    fin = new lli[d];

    for(i=0;i<d;i++)
    {
        fin[i] = vv[i].f;
        s.insert(fin[i]);
    }

    for(i=0;i<d;i++)
    {
        c = 0;
        for(auto itt: s)
        {
            if(c == 1)
            {
                break;
            }
            c++;
        }

        if(s.begin() + *itt < s.rbegin())
        {
            b = s.begin() + *itt;
            s.erase(s.rbegin());
            s.insert(b);
            s.insert(1);
        }
    }
}
