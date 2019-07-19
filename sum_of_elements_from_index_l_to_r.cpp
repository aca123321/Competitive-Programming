#include<bits/stdc++.h>
using namespace std;

main()
{
    int q,i,n,j,l,r; // q = no. of queries , n = no. of elements in the array

    int *arr, *sum;

    cout<<"Enter the number of elements in the array\n";
    cin>>n;

    arr = new int[n];
    sum = new int[n];

    cout<<"Enter the number of queries\n";
    cin>>q;

    for(i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" of the array\n";
        cin>>arr[i];
    }

    j=1;

    sum[0] = arr[0];

    for(i=1;i<n;i++)
    {
        sum[i] = arr[i] + sum[i-1];
    }

    while(q--)
    {
        cout<<"Enter left limit l and right limit r separated by space for query number "<<j++<<endl;
        cin>>l>>r;

        cout<<(sum[r-1] - sum[l-1] + arr[l-1])<<endl;
    }
}
