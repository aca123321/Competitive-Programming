#include<iostream>
using namespace std;

main()
{
    int n,i,h,*arr,w=0;

    cin>>n>>h;

    arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        (arr[i]>h)?(w=w+2):(w++);
    }

    cout<<w;
}
