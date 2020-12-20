#include <bits/stdc++.h>
using namespace std;

void countDistinct(int [], int , int );

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{

		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}

void countDistinct(int arr[], int k, int n)
{
    map<int,int> m;
    int i;

    for(i=0;i<k;i++)
    {
        m[arr[i]]++;
    }
    cout<<m.size();
    for(i=k;i<n;i++)
    {
        m[arr[i]]++;
        m[arr[i-k]]--;
        if(m[arr[i-k]] == 0)
        {
            m.erase(arr[i-k]);
        }
        cout<<" "<<m.size();
    }
    cout<<endl;
}


