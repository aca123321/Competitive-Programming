#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,t,n,a,b,c,j,*arr,*less;

    cin>>t;

    while(t--)
    {
        cin>>n;
        arr = new lli[n];
        lli less[n] = {0};

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i] > arr[j])
                {
                    less[i]++;
                }
            }
        }

        for(i=0;i<n;i++)
        {
            if(less[i] >= ())
        }
    }
}
