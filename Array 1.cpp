#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli n,k,i,flag[100001]={0},count=0,l,r;

    cin>>n>>k;

    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(flag[arr[i]] == 0)
        {
            count++;
        }

        flag[arr[i]]++;
    }

    if(count<k)
    {
        cout<<-1<<" "<<-1;
        return 0;
    }

    l=0;
    r=n-1;

    i = n-1;

    while(count>=k && i>=0)
    {
        flag[arr[i]]--;
        r = i;
        if(flag[arr[i]] == 0)
        {
            count--;
        }
        i--;
    }

    count = k;
    r++;

    i = 0;

    while(count>=k && i<r)
    {
        flag[arr[i]]--;
        l=i;
        if(flag[arr[i]] == 0)
        {
            count--;
        }
        i++;
    }

    l++;

    cout<<l<<" "<<r;
}

