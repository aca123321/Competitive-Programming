#include<bits/stdc++.h>
#define lli long long int
using namespace std;
main()
{
	lli n,m,i,j,k,count,flag=0;
	deque <char > de;
	cin>>m;
	set <string> l;
	string s[m],p;
	for(i=0;i<m;i++)
	{
		//cin>>s[i];
		cin>>p;
		l.insert(p);
	}
	set<string >::iterator it;
	it=l.begin();
	n=0;
	while(it!=l.end())
	{
		s[n]=*it;
		it++;
		n++;
	}
	count=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			string s2,s3;
			s2=s[i]+s[j];
			for(k=0;k<s2.size();k++)
			{
				if(s2[k]=='(')
				{
					de.push_back(s2[k]);
				}
				else if(s2[k]==')')
				{
					if(!de.empty())
					{
						de.pop_back();
					}
					else
					{
						flag=1;
						//break;
					}
				}
			}
			if(!de.empty())
			{
				flag=1;
			}
			de.clear();
			if(flag==1)
			{
				flag=0;
				s3=s[j]+s[i];
				for(k=0;k<s3.size();k++)
				{
					if(s3[k]=='(')
					{
						de.push_back(s3[k]);
					}
					else if(s3[k]==')')
						{
						if(!de.empty())
						{
							de.pop_back();
						}
						else
						{
							flag=1;
							//break;
						}
					}
				}
				if(!de.empty())
				{
					flag=1;
					//break;
				}
			}
		de.clear();
		if(flag==0)
		{
			count++;
		}
			flag=0;
		}

	}
	cout<<count;
}
