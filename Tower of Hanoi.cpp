#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec  second

void solve(lli n,char origin, char support, char destination)
{
    if(n == 1)
    {
        cout<<"Move "<<n<<" disk from "<<origin<<" to "<<destination<<endl;
    }
    else
    {
        solve(n-1,origin,destination,support);
        solve(1,origin,support,destination);
        solve(n-1,support,origin,destination);
    }
}

main()
{
    lli n,i,a,b,c,j,k;

    cin>>n;

    solve(n,'A', 'B', 'C'); // transfer n disks from A to C using B as the support

}
