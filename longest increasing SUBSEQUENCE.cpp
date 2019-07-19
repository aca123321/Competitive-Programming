#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,j,*ans,a,max=INT_MIN,ind=0;

    cout<<"Enter the number of elements in the sequence\n";
    cin>>n;
    int arr[n],dp[n],pre[n]={0};

    for(i=0;i<n;i++)
    {
        dp[i] = 1;
        pre[i] = -1;
    }

    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    i = 0;

    while(i<n)
    {
        j = 0;
        while(j<i)
        {
            if(arr[j]<arr[i] && (dp[j]+1) > dp[i])
            {
                dp[i] = dp[j]+1;
                pre[i] = j;
            }
            j++;
        }
        i++;
    }
/*
    for(i=0;i<n;i++)
    {
        cout<<i<<" "<<arr[i]<<" "<<dp[i]<<" "<<pre[i]<<endl;
    }
*/

    for(i=0;i<n;i++)
    {
      //cout<<i<<" "<<arr[i]<<" "<<dp[i]<<" "<<pre[i]<<endl;

        if(dp[i]>max)
        {
            max = dp[i];
            ind = i;
        }
    }
    cout<<endl;

    ans = new int[dp[ind]];
    a = ind;
    ans[0] = arr[ind];
    for(i=1;i<dp[ind];i++)
    {
        ans[i] = arr[pre[a]];
        a = pre[a];
    }

    cout<<"The length of the LIS is "<<dp[ind]<<" and the subsequence is:\n";
    for(i=0;i<dp[ind];i++)
    {
        cout<<ans[i]<<" ";
    }

}
