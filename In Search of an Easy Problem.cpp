#include<iostream>
using namespace std;

main()
{
    int n,*arr,i,a=0;

    cin>>n;
    arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] == 1)
        {
            cout<<"HARD\n";
            a++;
            break;
        }
    }

    if(a == 0)
    {
        cout<<"EASY\n";
    }

}
