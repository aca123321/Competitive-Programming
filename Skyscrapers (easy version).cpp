#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[1004],n;
vector<lli> a,b,vs;

pair< lli , vector<lli> > solve(lli x)
{
	lli i,maxi=arr[x],sum=maxi;
	a.clear();
	b.clear();
	vs.clear();
	
	for(i=x+1;i<n;i++)
	{
		if(arr[i] <= maxi)
		{
			sum += arr[i];
			b.pb(arr[i]);
			maxi = arr[i];
		}
		else
		{
			sum += maxi;
			b.pb(maxi);
		}
	}
	sort(b.rbegin(),b.rend());
	maxi = arr[x];
	for(i=x-1;i>=0;i--)
	{
		if(arr[i] <= maxi)
		{
			sum += arr[i];
			a.pb(arr[i]);
			maxi = arr[i];
		}
		else
		{
			sum += maxi;
			a.pb(maxi);
		}
	}
	sort(a.begin(),a.end());
	vs.insert(vs.end(),a.begin(),a.end());
	vs.pb(arr[x]);
	vs.insert(vs.end(),b.begin(),b.end());
	/*
	cout<<"ind = " <<x<<", and sum = "<<sum<<endl;
	for(i=0;i<n;i++)
	{
		cout<<vs[i]<<" ";
	}	
	cout<<endl;
	*/
	return make_pair(sum,vs);
}

main()
{
	lli a,i;
	cin>>n;
	vector<lli> v;
	pair< lli, vector<lli> > p;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	a = arr[0];
	for(i=0;i<n;i++)
	{
		p = solve(i);
		if(p.f >= a)
		{
			v = p.sec;	
			a = p.f;
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
}
