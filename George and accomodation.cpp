#include<iostream>
using namespace std;

main()
{
    int n,p,q,i,count=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        if((q-p)>=2)
            count++;
    }

    cout<<count;
}
