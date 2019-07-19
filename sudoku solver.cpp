#include<bits/stdc++.h>
using namespace std;
#define pb push_back

main()
{
    int i,j,k,a,b;
    vector<int> vh[9];
    vector<int> vv[9];

    int arr[9][9];

    cout<<"Enter the partially filled sudoku (if a cell is empty, then fill it with 0)\n";
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] != 0)
            {
                vh[i].pb(arr[i][j]);
            }
        }
    }

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(arr[j][i] != 0)
            {
                vv[i].pb(arr[j][i]);
            }
        }
    }

    for(i=0;i<9;i++)
    {

    }


}

/*
    cout<<"vh\n";
    for(i=0;i<9;i++)
    {
        for(j=0;j<vh[i].size();j++)
        {
            cout<<vh[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"vv\n";
    for(i=0;i<9;i++)
    {
        for(j=0;j<vv[i].size();j++)
        {
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }






    cout<<"vh\n";
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            cout<<vh[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"vv\n";
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }
*/
