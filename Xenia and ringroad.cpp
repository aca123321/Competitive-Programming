#include<iostream>
using namespace std;

main()
{
    long long int n,m,*arr,i,x=1,sum=0;

    cin>>n>>m;
    arr = new long long int[m];

    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<m;i++)
    {
        if(arr[i]>=x)
        {
            sum += arr[i] - x;
            x = arr[i];
        }

        else
        {
            sum += n - (x - arr[i]);
            x = arr[i];
        }
    }

    cout<<sum;
}
