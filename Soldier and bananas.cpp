#include<iostream>
using namespace std;

main()
{
    int i,n,k,w, reqd;

    cin>>k>>n>>w;

    reqd = (k*w*(w+1))/2;

    reqd -= n;

    if(reqd <= 0)
    {
        cout<<"0";
    }

    else
        cout<<reqd;
}
