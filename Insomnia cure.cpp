#include<iostream>
using namespace std;

main()
{
    int arr[4],d,i,j,x=0,*ptr;

    for(i=0;i<4;i++)
    {
        cin>>arr[i];
    }

    cin>>d;

    ptr = new int[d];

    for(i=1;i<=d;i++)
    {
        ptr[i-1] = i;
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<d;j++)
        {
            if((ptr[j]%arr[i] == 0)&&(ptr[j]!=0))
            {
                x++;
                ptr[j] = 0;
            }
        }
    }

    cout<<x;
}
