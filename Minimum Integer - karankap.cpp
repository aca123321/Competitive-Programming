#include<bits/stdc++.h>
using namespace std;
main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int i,l,r,d,y=0,sum=0,v,x;
		cin>>l>>r>>d;
		i=1;
		v=l/d;
		x=r/d;
		if(d<l)
		{
			cout<<d<<endl;
		}
		else
		{
			i=x;
			while(1)
			{
				if(d*i>r)
				{
				    cout<<d*i<<endl;
				    break;
				}
				i++;
			}
		}
	}
}
