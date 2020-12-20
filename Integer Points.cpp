#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,b,c,j,k,no,ne,m,mo,me;

    cin>>t;

    while(t--)
    {
        cin>>n;
        no=0;
        ne=0;
        mo=0;
        me=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a%2 == 0)
            {
                ne++;
            }
            else
            {
                no++;
            }
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>a;
            if(a%2 == 0)
            {
                me++;
            }
            else
            {
                mo++;
            }
        }

        cout<<(no*mo)+(ne*me)<<endl;

    }

}
