#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,q,a,b,l,r;
    string s;
    cin>>s;
    n = s.length();
    lli brr[n-1],arr[n-1]={0};

    for(i=0;i<n-1;i++)
    {
        brr[i] = (s[i] == s[i+1])?1:0;
    }
    arr[0] = brr[0];
    for(i=1;i<n-1;i++)
    {
        arr[i] = arr[i-1] + brr[i];
    }
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        cout<<arr[r-2]-arr[l-1]+brr[l-1]<<endl;
    }
}
