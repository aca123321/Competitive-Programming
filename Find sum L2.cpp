#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,count;
    long long int *arr, k,sum;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        count = sum = 0;
        arr = new long long int[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n;i++)
        {
            sum += arr[i];

            if(sum == k || arr[i] == k || sum > k)
            {
                if(sum == k || arr[i] == k)
                {
                    count++;
                }
                sum = arr[i];
            }
        }

        cout<<count<<endl;
    }

    return 0;
}
