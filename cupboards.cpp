#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,cl=0,cr=0,a,b;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;

        if(a == 1)
        {
            cl++;
        }

        if(b == 1)
        {
            cr++;
        }
    }

    cout<<min(cl,(n-cl))+min(cr,(n-cr));
}

