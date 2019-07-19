#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first

main()
{
    lli n,j,k,i,a,b,count=0;
    cin>>n>>k;
    lli arr[n],flag[n]={0};

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    i = 0;
    j = 1;
    while(i<n)
    {
        if(flag[i] == 0)
        {
            while(j<n)
            {
                a = arr[j] - arr[i];

                if(flag[j] == 0 && a>=k)
                {
                    count++;
                    flag[j] = 1;
                    flag[i] = 1;
                    break;
                }

                j++;
            }
        }
        i++;
    }

    cout<<count;
}
