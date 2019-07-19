#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,year,num_trans,eq;

    cout<<"Enter year\n";
    cin>>year;

    eq = year/2;

    num_trans = pow(2,eq);

    for(i=0;i<num_trans;i++)
    {
        cout<<"________\n|      |\n|  BC  |\n|  548 |\n--------\n |  |  |\n |  |  |\n |  |  |\n\n";
    }
}
