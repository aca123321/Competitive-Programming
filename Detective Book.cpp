#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,n,count = 0,days=0,max=INT_MIN;
    cin>>n;
    lli arr[n+1],flag[n+1]={0};

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    i = 1;

    while(count < n)
    {
        if(flag[arr[i]] == 0)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        if(i == max)
        {
            days++;
        }
        count++;
        flag[i]++;
        i++;
    }

/*
    while(count < n)
    {
        if(flag[arr[i]] == 0)
        {
            flag[arr[i]]++;
            i = arr[i];
            count++;
        }
        else
        {
            if(count != 0)
            {
                days++;
            }
        }
    }
*/
    cout<<days;

}
