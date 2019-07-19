#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f;

    cout<<"Enter the number of frames:\n";
    cin>>f;

	int pfault=0;
	int n;
	cout<<"Enter number of requests:\n"<<endl;
	cin>>n;
	int pr[n];
	cout<<"Enter the page reference string separated by space:\n"<<endl;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x>=p){
		cout<<"Invalid page address (0 <= page address <p)"<<endl;
		i=i-1;
		continue;
		}
		pr[i]=x;
	}
	int m[1000]={0};
	int flag;
	int front=0;
	int rear=0;
	int j;
	for(int i=0;i<n;i++)
	{
		flag=0;
		for(j=front;j<rear;j++)
		{
			if(pr[i]==m[j]){
				for(int k=j+1;k<rear;k++)
				{
					m[k-1]=m[k];
				}
				m[rear-1]=pr[i];
			flag=1;
			break;
			}
		}
		if(flag==0)
		{
			pfault++;
			if(rear-front<4)
			m[rear++]=pr[i];
			else{
				front++;
			    m[rear++]=pr[i];
			}
		}
		cout<<"Pages in main memory are:"<<endl;
		for(int k=front;k<rear;k++)
		{
			cout<<m[k]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"Number of page faults are: "<<pfault<<endl;
}

