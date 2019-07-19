#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,j,n,x,k,l;

    cin>>n;

    x = 2*n +1;

    for(i=0;i<x;i++)
    {
        k = 0;

        if(i>n)
        {
            l = 2*n - i;
        }

        else
        {
            l = i;
        }

        for(j=0;j<x;j++)
        {
            if(j<=(x/2))
            {
                if(j >= (x/2)-l)
                {
                    if(j == (x/2))
                    {
                        if(l == 0)
                        {
                            cout<<k--;
                        }

                        else
                        {
                            cout<<k--<<" ";
                        }
                    }

                    else
                    {
                        cout<<k++<<" ";
                    }
                }

                else
                {
                    cout<<"  ";
                }
            }

            else
            {
                if(j <= (x/2)+l)
                {
                    if(j == (x/2)+l)
                    {
                        cout<<k;
                    }

                    else
                    {
                        cout<<k--<<" ";
                    }
                }
            }
        }

        cout<<endl;
    }
}
