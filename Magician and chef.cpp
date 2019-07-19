#include<iostream>
using namespace std;

main()
{
    long int t,n,x,j,s,i,a,b,temp,*arr;

    cin>>t;

    arr = new long int[t];

    for(i=0;i<t;i++)
    {
        cin>>n>>x>>s;
        temp = x;

        for(j=0;j<s;j++)
        {
            cin>>a>>b;

            if(a == temp)
            {
                temp = b;
            }

            else if(b == temp)
            {
                temp = a;
            }
        }

        arr[i] = temp;
    }

    for(i=0;i<t;i++)
    {
        cout<<arr[i]<<endl;
    }
}
