#include<iostream>
using namespace std;

main()
{
    int n,a[3],i,j,l;

    cin>>n>>a[0]>>a[1]>>a[2];

    for(i=0;i<3;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                l = a[i];
                a[i] = a[j];
                a[j] = l;
            }
        }
    }


}
