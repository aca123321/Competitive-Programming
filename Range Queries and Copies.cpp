#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[500001], brr[200001];

lli sum(lli i)
{

}

main()
{
    lli n,i,j,t,a,b,c, num,count;

    cin>>n>>t;

    num = round(pow(2, ceil(log(n)/log(2))));

    for(i=0;i<n;i++)
    {
        cin>>brr[i];
    }

    arr[num] = brr[0];
    count = 1;
    for(i=num+1;count<n;i++)
    {
        arr[i] = brr[i-num] - brr[i-num-1];
        count++;
    }

    cout<<"i = "<<i<<", "<<arr[i]<<endl;
    arr[i] = -brr[i-num-1];
    i++;
    for(i=i;i<=(2*num)-1;i++)
    {
        arr[i] = 0;
    }

    for(i=num-1;i>=1;i--)
    {
        arr[i] = arr[2*i] + arr[(2*i)+1];
    }

    for(i=1;i<=(2*num)-1;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(i=1;i<=(2*num)-1;i++)
    {
        cout<<arr[i]<<" ";
    }


}
