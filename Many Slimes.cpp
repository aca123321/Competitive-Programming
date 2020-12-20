#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

vector<lli> v;
lli b,c;

main()
{
    lli n,i,a,t,j,k,x,y;

    cin>>n;
    c = 1;
    for(i=0;i<n;i++)
    {
        c*=2;
    }

    for(i=0;i<c;i++)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end(),greater<int>());
    lli flag = 0;
    b =1;
    if(v[0] <= v[1])
    {
        cout<<"No";
        return 0;
    }
    i = 1;
    while(i<(c/2))
    {
        b = round(pow(2,(int(floor(log2(i))))));
        if(v[i] <= v[i+b])
        {
            flag = 1;
            break;
        }
        i++;
    }

    /*
    for(i=0;i<n;i++)
    {
        for(j=(b+(b/2));j<(2*b);j++)
        {
            if(v[j-b] <= v[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            break;
        }
        b *= 2;
    }
    */

    if(flag == 1)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
}
