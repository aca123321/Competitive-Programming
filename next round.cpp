#include<iostream>
using namespace std;

main()
{   int n,i,k,count;
    int a[100]={0};

    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    count=0;

    for(i=0;i<n;i++)
    {
        if((a[i]>a[k-1])&&(a[i]>0))
        count++;
    }
    cout<<count;
}
