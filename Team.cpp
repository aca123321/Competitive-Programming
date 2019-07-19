#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,a,i,j,count=0;

    cin>>n;

    int arr[n] = {0};

    for(j=0;j<n;j++)
    {
        for(i=0;i<3;i++)
        {
            cin>>a;
            arr[j] += a;
        }
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>=2)
        {
            count++;
        }
    }

    cout<<count;
}
