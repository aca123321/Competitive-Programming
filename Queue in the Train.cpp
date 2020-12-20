#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

struct persons
{
    lli pos,at;
};

persons person[100002];
lli arr[100002],ans[100002];



main()
{
    lli n,i,a,t,b,c,j,k,p;
    cin>>n>>p;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        person[i].pos = i;
        person[i].at = arr[i];
    }



}
