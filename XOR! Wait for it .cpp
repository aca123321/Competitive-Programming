#include<bits/stdc++.h>
using namespace std;

#define lli unsigned long long

int main()
{
    lli t,l,r,n,a,i,*arr;

    ios_base::sync_with_stdio(false);

    cin>>t;
    arr = new lli[t];

    for(i=0;i<t;i++)
    {
        cin>>l>>r;

        n = r-l+1;

        a = (n/2);

        if(l%2 == 0)
        {
            if(a%2 == 0)
            {
                arr[i] = 0;
            }

            else
            {
                arr[i] = 1;
            }
        }

        else
        {
            if(r%2 == 0)
            {
                if(a%2 == 0)
                {
                    arr[i] = 0;
                }

                else
                {
                    arr[i] = 1;
                }
            }

            else
            {
                if((a+1)%2 == 0)
                {
                    arr[i] = 0;
                }

                else
                {
                    arr[i] = 1;
                }
            }
        }
    }

    for(i=0;i<t;i++)
    {
        if(arr[i] == 0)
        {
            cout<<"Even";
        }

        else
        {
            cout<<"Odd";
        }

        if(i != t-1)
        {
            cout<<endl;
        }
    }

    return 0;
}
