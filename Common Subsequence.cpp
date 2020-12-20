#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,t,a,b,c,m;

    cin>>t;
    map<lli, lli> ma;

    while(t--)
    {
        cin>>n>>m;
        lli flag = 0;
        ma.clear();
        for(i=0;i<n;i++)
        {
            cin>>a;
            ma[a]++;
        }
        for(i=0;i<m;i++)
        {
            cin>>a;
            if(ma[a] > 0 && flag == 0)
            {
                cout<<"YES\n"<<1<<" "<<a<<endl;
                flag = 1;
            }
        }

        if(flag == 0)
        {
            cout<<"NO\n";
        }
    }

}
