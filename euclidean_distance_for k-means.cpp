#include<bits/stdc++.h>
using namespace std;

#define lli float
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,a,b,x1,y1,x2,y2;
    lli xarr[1000], yarr[1000],ans1[1000],ans2[1000];
    int i;
    vector<pair<lli,lli>> v1,v2;

    cin>>n;
    cin>>x1>>y1;
    cin>>x2>>y2;

    for(i=0;i<n;i++)
    {
        cin>>xarr[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>yarr[i];
    }

    for(i=0;i<n;i++)
    {
        a = round(pow((x1-xarr[i]),2));
        b = round(pow((y1-yarr[i]),2));
        ans1[i] = sqrt(a+b);
        a = round(pow((x2-xarr[i]),2));
        b = round(pow((y2-yarr[i]),2));
        ans2[i] = sqrt(a+b);
    }

    for(i=0;i<n;i++)
    {
        if(ans1[i]<ans2[i])
        {
            cout<<i+1<<" -> 1\n";
            v1.pb({xarr[i],yarr[i]});
        }
        else
        {
            cout<<i+1<<" -> 2\n";
            v2.pb({xarr[i],yarr[i]});
        }
    }

    a = 0;
    b = 0;
    for(auto it: v1)
    {
        a += it.f;
        b += it.sec;
    }
    a /= (v1.size());
    b /= (v1.size());
    cout<<"new centroid 1 = ("<<a<<","<<b<<")\n";

    a = 0;
    b = 0;
    for(auto it: v2)
    {
        a += it.f;
        b += it.sec;
    }
    a /= (v2.size());
    b /= (v2.size());
    cout<<"new centroid 2 = ("<<a<<","<<b<<")\n";

}
