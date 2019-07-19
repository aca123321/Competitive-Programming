#include<bits/stdc++.h>
using namespace std;

main()
{
    double n,x,mini=INT_MAX,sum=0,start = INT_MIN , end = INT_MIN, count = 0,sumseg=0;
    int i;

    cin>>n>>x;
    double arr[int(n)];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>0 || i = 0)
        {

        }
    }

    for(i=0;i<n;i++)
    {
        if(sum - arr[i] + (arr[i]/x) < mini)
        {
            mini = sum - arr[i] + (arr[i]/x);
        }
    }

}
