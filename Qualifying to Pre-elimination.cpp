#include<bits/stdc++.h>
using namespace std;
bool comp(long long int a, long long int b)
{
    if(a>b)
    {
        return true;
    }

    return false;
}
main()
{
	long long int t,n,k,j,*s,*ans,m,count;
	cin>>t;
	ans = new long long int[t];

	j = 0;

	for(int i=0;i<t;i++)
	{
		cin>>n>>k;
		s = new long long int[n];

		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		sort(s,s+n,comp);
		count = m = k;

		while(s[m]==s[m-1])
		{
			count++;
			m++;
		}
		ans[j]=count;
		j++;
	}
	for(int i=0;i<t;i++)
	{
		cout<<ans[i]<<endl;
	}
}
