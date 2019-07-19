#include<bits/stdc++.h>

#define lli long long int

using namespace std;

main()

{

	lli t,n,i,j,k,m,l,*arr;

	cin>>t;

	while(t--)

	{

		lli timemin,timecount;

		cin>>n>>m>>k>>l;

		arr=new lli[n+2];

		for(i=1;i<=n;i++)

		{

			cin>>arr[i];

		}

		arr[0]=0;

		arr[n+1]=k;

		sort(arr,arr+n+2);

		timemin=m*l;

		timecount=m*l;

		timecount = timecount - arr[1];

		if(timecount<=0)

		{

			timemin=0;

		}

		timecount=m*l;

		i=1;

		while(arr[i]<=k && i<=(n+1))

		{

			if((arr[i]-arr[i-1])<=(timecount+l))

			{

				timecount=timecount-(arr[i]-arr[i-1]);

				if(timecount<timemin)

				{

					timemin=timecount;

				}

			}

			else

			{

				timecount=0;

				timemin=0;

				break;

			}



			timecount+=l;

			i++;

		}

		cout<<timemin+l<<endl;

	}

}
