#include<iostream>
using namespace std;
main()
{
	long long int T,N,H,j,k=0;
	cin>>T;
	long long int answer[T];
	for(int i=0;i<T;i++)
	{
		cin>>N>>H;
		long long int arr[N];
		for(int j=0;j<N;j++)
		{
			cin>>arr[j];
		}
		long long int count=0,min=1;
		while(count>H||count==0)
		{
			count=0;
			for(j=0;j<N;j++)
			{
				if(arr[j]%min==0)
				{
					count=count+(arr[j]/min);
				}
				else
				{
					count=count+((arr[j]/min)+1);
				}
			}
			min++;
		}
		answer[k]=min-1;
		k++;
	}
	for(int m=0;m<T;m++)
	{
		cout<<answer[m]<<"\n";
	}
}
