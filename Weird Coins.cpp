#include<iostream>
using namespace std;

main()
{
    long int i,n,a,m,t,j;

    cin>>t;
    long int arr[t];

    for(j=0;j<t;j++)
    {
        cin>>m>>n;

        for(i=0;i<(m*n);i++)
        {
            cin>>a;
        }

        if(n%2 == 0)
        {
            arr[j] = (a*(m*n)) - (a*m) + (a);
        }

        else
        {
            arr[j] = a*(m*n);
        }
    }

    for(i=0;i<t;i++)
    {
        cout<<arr[i];
        if(i != (t-1))
        {
            cout<<endl;
        }
    }

}
