#include<bits/stdc++.h>
using namespace std;

#define lli long long int


main()
{
    lli i,n,t;
    lli x,y,l,r,a,ans,res;

    cin>>t;

    string player[4] = {"Jeet" , "Alice" , "Bob" , "Camila"};

    while(t--)
    {
        cin>>x>>y;

        l = INT_MIN;
        r = INT_MIN;

        if(x == y)
        {
            cout<<player[2]<<endl;
        }

        else if(y == 0)
        {
            cout<<player[1]<<endl;
        }

        else
        {
            i = 1;
            ans = (x*y)/__gcd(x,y);
            i = ans/y;

            if(i%2 == 0) // hit on left side
            {
                if(int((ans)/x)%2 == 0)
                {
                    cout<<player[0]<<endl;
                }

                else
                {
                    cout<<player[3]<<endl;
                }
            }

            else // hit on left side
            {
                if(int((ans/x))%2 == 0)
                {
                    cout<<player[1]<<endl;
                }
                else
                {
                    cout<<player[2]<<endl;
                }
            }
        }
    }


}
