#include<iostream>
using namespace std;

main()
{
    int arr[10] = {0},n,i,x;

    cout<<"Enter a 4-digit number\n";
    cin>>n;

    for(i=0;i<4;i++)
    {
        x = n%10;
        arr[x]++;
        n /= 10;
    }

    for(i=0;i<10;i++)
    {
        if(arr[i] != 0)
        {
            cout<<i<<" ";
        }
    }
}
