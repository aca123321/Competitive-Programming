#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,one=0,two=0;
    cin>>n;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    if(one%2 == 0)
    {
        if(one == 0)
        {
            for(i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            return 0;
        }
        else
        {
            if(one == 2)
            {
                if(two>0)
                {
                    cout<<"2 1 ";
                    for(i=0;i<two-1;i++)
                    {
                        cout<<2<<" ";
                    }
                    cout<<1;
                }
                else
                {
                    for(i=0;i<one;i++)
                    {
                        cout<<1<<" ";
                    }
                }
            }
            else
            {
                if(two>0)
                {
                    cout<<"2 1 ";
                    for(i=0;i<two-1;i++)
                    {
                        cout<<2<<" ";
                    }
                    for(i=0;i<one-1;i++)
                    {
                        cout<<1<<" ";
                    }

                }
                else
                {
                    for(i=0;i<one;i++)
                    {
                        cout<<1<<" ";
                    }
                }
            }
        }
    }

    else // one is odd
    {
        if(one>=3)
        {
            if(two>0)
            {
                cout<<"2 1 ";
                for(i=0;i<two-1;i++)
                {
                    cout<<2<<" ";
                }
                for(i=0;i<one-1;i++)
                {
                    cout<<1<<" ";
                }

            }
            else
            {
                for(i=0;i<one;i++)
                {
                    cout<<1<<" ";
                }
            }
        }

        else
        {
            if(two>0)
            {
                cout<<"2 1 ";
                for(i=0;i<two-1;i++)
                {
                    cout<<2<<" ";
                }
            }
            else
            {
                for(i=0;i<one;i++)
                {
                    cout<<1<<" ";
                }
            }
        }
    }
}
