#include<bits/stdc++.h>
using namespace std;

main()
{
    int y,b,r,a;

    cin>>y>>b>>r;

    a = min(y,(min(b-1,r-2)));

    cout<<(3*a)+3;
}
