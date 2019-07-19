#include<iostream>
using namespace std;

main()
{
    int i,m;

    cout<<"Enter the size of array"<<endl;
    cin>>m;
    int *vect= new int[m];
    for(i=0;i<m;i++)
    {
        cout<<"Enter element "<<i+1<<" of array"<<endl;
        cin>>vect[i];
    }

     cout<<"The array input is\n";

        for(i=0;i<m;i++)
    {
        cout<<vect[i]<<"  ";
    }
}
