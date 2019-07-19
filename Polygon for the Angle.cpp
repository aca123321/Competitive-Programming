#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int t;
    long double a,x,i,ang;

    cin>>t;

    while(t--)
    {
        cin>>ang;

        i = 3;

        while(1)
        {
            a = ((i-2)*180)/(i);

            x = (180/i);

            if(ceil(ang/x) == floor(ang/x))
            {
                if(ang<=a)
                {
                    cout<<i<<endl;
                    break;
                }

                else
                {
                    i++;
                }
            }

            else
            {
                i++;
            }
        }
    }



}
