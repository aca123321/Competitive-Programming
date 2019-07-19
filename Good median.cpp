#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,n,i,k,count,*arr,**mat;

    cin>>t;

    mat = new lli*[1010];

    for(i=0;i<1010;i++)
    {
        mat[i] = new lli[1010];
    }

    while(t--)
    {
        cin>>n;
        arr = new lli[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }


    }
}
