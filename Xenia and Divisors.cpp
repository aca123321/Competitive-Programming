#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define s second
#define f first

main()
{
    lli n,i,a,b,count=0;

    cin>>n;
    lli brr[n];
    lli arr[8]={0};
    lli casecount[3]={0};

    for(i=0;i<n;i++)
    {
        cin>>brr[i];
        arr[brr[i]]++;
    }

    lli x,y,z;

    x = min(arr[1],min(arr[3],arr[6]));
    casecount[0] = x;
    arr[1] -= x;
    arr[3] -= x;
    arr[6] -= x;


    y = min(arr[1],min(arr[2],arr[6]));
    casecount[1] = y;
    arr[1] -= y;
    arr[2] -= y;
    arr[6] -= y;


    z = min(arr[1],min(arr[2],arr[4]));
    casecount[2] = z;
    arr[1] -= z;
    arr[2] -= z;
    arr[4] -= z;

    for(i=1;i<8;i++)
    {
        if(arr[i]>0)
        {
            cout<<-1;
            return 0;
        }
    }

    lli j;

    for(i=0;i<casecount[2];i++)
    {
        cout<<1<<" "<<2<<" "<<4<<endl;
    }

    for(i=0;i<casecount[1];i++)
    {
        cout<<1<<" "<<2<<" "<<6<<endl;
    }

    for(i=0;i<casecount[0];i++)
    {
        cout<<1<<" "<<3<<" "<<6<<endl;
    }
}
