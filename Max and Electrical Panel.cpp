#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli cost = 0,c;

lli f(lli x)
{
    int res;

    cout<<1<<" "<<x<<endl;
    fflush(stdout);

    cost += 1;

    fflush(stdin);
    cin>>res;

    return res;
}

lli bin_search(lli low,lli high)
{
    lli mid = ((low+high)/2),a,b,d,e;

    if(low >= high)
    {
        return mid;
    }

    b = (low + mid)/2;
    c = (low + b)/2;

    a = f(mid);

    if(a == 1 || a == -1)
    {
        cout<<2<<endl;
        fflush(stdout);

        cost += c;

        if(f(b) == 1 || f(b == -1))
        {
            cout<<2<<endl;
            fflush(stdout);

            cost += c;

            if(f(b) == 1 || f(b == -1))
            {

            }

            else
            {
                cout<<"cost = "<<cost<<endl;
                return(bin_search(b+1,mid));
            }

        }

        else
        {
            cout<<"cost = "<<cost<<endl;
            return(bin_search(b+1,mid));
        }
    }

    else
    {
        cout<<"cost = "<<cost<<endl;

        return(bin_search(mid+1,high));
    }
}

main()
{
    lli n,co,x;

    cin>>n>>co;

    c = co;

    x = bin_search(1,n);

    cout<<3<<" "<<x<<endl;
}
