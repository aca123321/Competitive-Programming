#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
	ll n,i;
	cin>>n;

	ll arr[n+1];
	for(i=0;i<n;i++)
        cin>>arr[i];

	ll flag=arr[n-1],sum=arr[n-1];
	for(i=n-2;i>=0;i--)
	{
		if(flag==1)
			break;
		if(arr[i]>=flag)
		{
			sum=sum+flag-1;
			flag--;
		}
		else
		{
			sum+=arr[i];
			flag=arr[i];
		}
		if(flag==1)
		{
			break;
		}
	}
	cout<<sum;
}
