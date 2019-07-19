#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int n,i,flag = 0;

    cin>>n;

    if(n%2 == 0)
    {
        cout<<(n/2);
    }

    else
    {
        i=3;

        while(i <= sqrt(n))
        {
            if(n%i == 0) // after you subtract an odd from an odd, you get an even number always (coz, odd + odd = even but odd + even = odd always)
            {
                if(n == i)
                {
                    cout<<"1";
                    break;
                }

                else
                {
                    cout<< 1 +((n-i)/2);
                }

                flag = 1;
                break;
            }

            i += 2;
        }

        if(flag == 0)
        {
            cout<<"1";
        }
    }
}
