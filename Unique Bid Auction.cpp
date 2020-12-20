#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli arr[200001];

main()
{
    lli n,i,t,a,b,c,j,flag=0;
    map<lli, lli> m;
    map<lli, lli> ind;

    cin>>t;

    while(t--)
    {
        cin>>n;
        m.clear();

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            ind[arr[i]] = i+1;
            m[arr[i]]++;
        }

        flag = 0;
        for(auto it: m)
        {
            if(it.sec == 1)
            {
                cout<<ind[it.f]<<endl;
                flag = 1;
            }
            if(flag == 1)
            {
                break;
            }
        }

        if(flag == 0)
        {
            cout<<-1<<endl;
        }

    }

}
