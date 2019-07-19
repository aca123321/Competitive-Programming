#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,n,*arr,j,flag=0;

    cin>>n;
    arr = new lli[n];
    lli sum = 0;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n,greater<int>());

    for(i=-8;i<=8;i++)
    {
        sum = 0;

        for(j=0;j<n;j++)
        {
            if(sum <= (360*i))
            {
                sum += arr[j];
            }

            else
            {
                sum -= arr[j];
            }
        }

        if(sum%360 == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }





}
