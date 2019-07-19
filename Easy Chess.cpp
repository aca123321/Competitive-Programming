#include<bits/stdc++.h>
using namespace std;

main()
{
    char ch[9] = {'#','a','b','c','d','e','f','g','h'};
    int n,**arr,i,j,row=1,col=1;

    cin>>n;
    arr = new int*[9];

    for(i=0;i<9;i++)
    {
        arr[i] = new int[9];
    }

    for(i=1;i<9;i++)
    {
        for(j=1;j<9;j++)
        {
            arr[i][j] = 0;
        }
    }

    cout<<"a1 ";
    arr[row][col] = 1;


    if(n<=56)
    {
        for(i=1;i<n;i++)
        {
            if(i == n-1)
            {
                if(arr[row][8] == 0)
                {
                    col = 8;
                    cout<<ch[col]<<row<<" ";
                    arr[row][col] = 1;
                }

                else
                {
                    if(col == 8)
                    {
                        row++;
                        cout<<ch[col]<<row<<" ";
                        arr[row][col] = 1;
                    }

                    else
                    {
                        row = 8;
                        cout<<ch[col]<<row<<" ";
                        arr[row][col] = 1;
                    }
                }
            }

            else
            {
                if(row%2 == 0)
                {
                    if(col == 1)
                    {
                        row++;
                        cout<<ch[col]<<row<<" ";
                        arr[row][col] = 1;
                    }

                    else
                    {
                        col--;
                        cout<<ch[col]<<row<<" ";
                        arr[row][col] = 1;
                    }
                }

                else
                {
                    if(col == 8)
                    {
                        row++;
                        cout<<ch[col]<<row<<" ";
                        arr[row][col] = 1;
                    }

                    else
                    {
                        col++;
                        cout<<ch[col]<<row<<" ";
                        arr[row][col] = 1;
                    }
                }
            }
        }
    }

    else
    {
        for(i=1;i<54;i++)
        {
            if(i == n-1)
            {
                if(arr[row][8] == 0)
                {
                    col = 8;
                    cout<<ch[col]<<row<<" ";
                    arr[row][col] = 1;
                }

                else
                {
                    row++;
                    cout<<ch[col]<<row<<" ";
                    arr[row][col] = 1;
                }
            }

            else
            {
                if(row%2 == 0)
                {
                    if(col == 1)
                    {
                        row++;
                        cout<<ch[col]<<row<<" ";
                        arr[row][col] = 1;
                    }

                    else
                    {
                        col--;
                        cout<<ch[col]<<row<<" ";
                        arr[row][col] = 1;
                    }
                }

                else
                {
                    if(col == 8)
                    {
                        row++;
                        cout<<ch[col]<<row<<" ";
                        arr[row][col] = 1;
                    }

                    else
                    {
                        col++;
                        cout<<ch[col]<<row<<" ";
                        arr[row][col] = 1;
                    }
                }
            }
        }

        col = 8;
        cout<<ch[col]<<row<<" ";
        arr[row][col] = 1;
        col--;
        cout<<ch[col]<<row<<" ";
        arr[row][col] = 1;
        row++;
        cout<<ch[col]<<row<<" ";
        arr[row][col] = 1;

        for(i=0;i<(n-57);i++)
        {
            col--;
            cout<<ch[col]<<row<<" ";
            arr[row][col] = 1;
        }

    }

    cout<<"h8";


}
