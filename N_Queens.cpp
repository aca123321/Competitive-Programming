#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli *arr, n, maxi = 0, num = 0;

bool safe(lli ii, lli jj)
{
    lli i;
    for(i=0;i<ii;i++)
    {
        if(arr[i] == jj)
        {
            return false;
        }
    }
    for(i=0;i<ii;i++)
    {
        if( ((ii-i) == (jj-arr[i])) || ((ii-i) == (arr[i]-jj)) )
        {
            return false;
        }
    }
    return true;
}

bool solve(lli curRow)
{
    lli i,j,k;
    for(i=0;i<n;i++)
    {
        if(safe(curRow, i))
        {
            maxi = max(maxi, curRow+1);
            arr[curRow] = i;
            if(curRow == n-1)
            {
                num++;

                for(k=0;k<n;k++)
                {
                    for(j=0;j<n;j++)
                    {
                        if(arr[k] == j)
                        {
                            cout<<"Q ";
                        }
                        else
                        {
                            cout<<"- ";
                        }
                    }
                    cout<<endl;
                }
                cout<<endl;
            }
            if(solve(curRow+1))
            {
                return true;
            }
            else
            {
                continue;
            }
        }
    }
    return false;
}

main()
{
    lli i,j,a;

    cin>>n;
    arr = new lli[n];

    solve(0);

    cout<<num<<" solutions found\n";

    /*
    if(solve(0))
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i] == j)
                {
                    cout<<"Q ";
                }
                else
                {
                    cout<<"# ";
                }
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"No solution found\n";
        cout<<"Max queens than can be placed however = "<<maxi<<endl;
    }
    */
}
