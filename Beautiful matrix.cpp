#include<iostream>
using namespace std;

main()
{
    int arr[5][5], i,j,x,y;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                x = i;
                y = j;
            }
        }
    }

    x = x-2;
    if(x<0)
        x = -x;
    y = y-2;
    if(y<0)
        y = -y;

    cout<<x+y;
}
