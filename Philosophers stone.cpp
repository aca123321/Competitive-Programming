#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main() {

	lli n,i,t,a,b,c,m,j;

	cin>>t;
	lli arr[101][101], dp[101][101];

	while(t--)
	{
		cin>>n>>m;

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>arr[i][j];
				dp[i][j] = 0;
			}
		}

		for(i=0;i<n-1;i++)
		{
			for(j=0;j<m;j++)
			{
				if(j-1 >= 0)
				{
					dp[i+1][j-1] = max(dp[i+1][j-1],dp[i][j]+arr[i][j]);
				}
				if(j+1 < m)
				{
					dp[i+1][j+1] = max(dp[i+1][j+1],dp[i][j]+arr[i][j]);
				}
				if(j < m)
				{
					dp[i+1][j] = max(dp[i+1][j],dp[i][j]+arr[i][j]);
				}

			}
		}
		a = INT_MIN;
		for(i=0;i<m;i++)
		{
			a = max(a,dp[n-1][i]+arr[n-1][i]);
		}
		cout<<a<<endl;

	}

	return 0;
}
