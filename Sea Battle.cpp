#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,wa,ha,wb,hb,a,b,c,d,count = 0;

    cin>>wa>>ha>>wb>>hb;

    count += (ha+hb+2)*2;

    count += wa+wb;

    count += abs(wa-wb);

    cout<<count;
}
