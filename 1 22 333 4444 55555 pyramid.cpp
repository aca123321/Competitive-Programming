#include<iostream>
using namespace std;

main()
{
    int i,n,j;
    cout<<"Enter the number of levels you'd want in the pyramid";
    cin>>n;
    cout<<"\n\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
}