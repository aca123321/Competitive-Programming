#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,j,k,b,c,m;

    cin>>n;
    lli arr[n];
    map<lli,lli> ma,mb;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        ma[arr[i]]++;
    }
    cin>>m;
    lli brr[m];

    for(i=0;i<m;i++)
    {
        cin>>brr[i];
        mb[brr[i]]++;
    }

    lli flag = 0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            a = arr[i] + brr[j];
            if(ma[a] == 0 && mb[a] == 0 )
            {
                b = arr[i];
                c = brr[j];
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            break;
        }
    }

    cout<<b<<" "<<c;
}
