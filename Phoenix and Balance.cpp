#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

main()
{
    lli n,i,t,a,b,c,j,k;

    cin>>t;

    while(t--)
    {
        cin>>n;
        n = (n/2)+1;
        cout<<round(pow(2,n))-2<<endl;
    }

}
