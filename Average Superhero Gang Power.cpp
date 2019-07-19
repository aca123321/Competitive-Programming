#include<bits/stdc++.h>
using namespace std;

#define lli long double
#define f first
#define s second
#define pb(x) push_back(x)

main()
{
    lli *arr,k,m,sum=0,avg,a,b,num,x,maxi=INT_MIN;
    long long int n,i,j;

    cin>>n>>k>>m;
    arr = new lli[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
        maxi = max(maxi,arr[i]);
    }

    num = n;
    avg = (sum/n);

    sort(arr,arr+n);
    j = 0;
    i = 0;

    while(arr[j] != maxi && num != n-m)
    {
        avg = (((avg*num)-arr[j])/(num-1));
        j++;
        num--;
        i++;
    }

    avg = (((avg*num)+(min(k*(num),m-i)))/num);

    cout<<setprecision(10)<<avg;
}
