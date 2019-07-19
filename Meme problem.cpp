#include<bits/stdc++.h>
using namespace std;

main()
{
    long double a,b,d,i,t,det;

    cin>>t;

    while(t--)
    {
        cin>>d;

        det = (pow(d,2) - (4*d));

        if(det >= 0)
        {
            a = ((d) + sqrt(det))/(2);
            if(a == 0)
            {
                b = 0;
            }

            else
            {
                b = (d/a);
            }

            cout<<"Y ";

            cout<<fixed;
            cout<<setprecision(9)<<a;
            cout<<setprecision(9)<<" "<<b<<endl;
        }

        else
        {
            cout<<"N\n";
        }
    }
}
