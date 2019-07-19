#include<bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)
#define lli long long int

lli visited[10000];
vector<lli> graph[10000];
lli sieve[10000];

lli numcom(lli a, lli b)
{
    lli i,c,d,ans = 0,arr[10]={0},brr[10]={0};

    for(i=0;i<4;i++)
    {
        c = (a/pow(10,i))%10;
        d = (b/pow(10,i))%10;

        arr[c]++;
        brr[d]++;
    }

    for(i=0;i<10;i++)
    {
        if(arr[i] == brr[i])
        {
            ans++;
        }
    }

    return ans;
}

lli sieve
