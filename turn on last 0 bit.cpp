#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli s,a,b;

    cin>>s;
    a = ~s;

    b = a&(-a);

    cout<<(s | b);

}
