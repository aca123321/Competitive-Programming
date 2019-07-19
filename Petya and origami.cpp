#include<bits/stdc++.h>
using namespace std;

main()
{
    long double n,k,r,g,b;
    long long int sum=0;

    cin>>n>>k;

    r = 2*n;
    g = 5*n;
    b = 8*n;

    sum += ceil(r/k);
    sum += ceil(g/k);
    sum += ceil(b/k);

    cout<<sum<<endl;
}
