#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,max=0,count;
    cin>>n;
    lli arr[2*n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        arr[i+n] = arr[i];
    }

    i = 0;
    while(i<(2*n))
    {
        if(arr[i] == 1)
        {
            count = 1;
            while(arr[i] == arr[i+1] && i<(2*n) && arr[i] == 1)
            {
                i++;
                count++;
            }
            if(count > max)
            {
                max = count;
            }
            i++;
        }

        else
        {
            i++;
        }
    }

    cout<<max;
}
