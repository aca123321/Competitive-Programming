#include<iostream>
using namespace std;

main()
{
    int arr[4],i,j,k=1;

    for(i=0;i<4;i++)
    {
        cin>>arr[i];

        for(j=0;j<i;j++)
        {
            if(arr[i] == arr[j])
            {
                break;
            }

            else if(j == i-1)
            {
                k++;
            }
        }

    }

    cout<<4-k;
}
