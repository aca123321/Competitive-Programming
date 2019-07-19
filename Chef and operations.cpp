#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int t,i,n,*arra,*arrb,suma,sumb,diff;

    cin>>t;

    while(t--)
    {
        cin>>n;

        arra = new long long int[n];
        arrb = new long long int[n];
        suma = sumb = 0;

        diff = 0;

        for(i=0;i<n;i++)
        {
            cin>>arra[i];
            suma += arra[i];
        }

        for(i=0;i<n;i++)
        {
            cin>>arrb[i];
            sumb += arrb[i];
        }

        if(sumb >= suma)
        {
            if((sumb - suma)%6 != 0)
            {
                cout<<"NIE\n";
            }


        else
        {
            i=0;

            while(1)
            {
                if(arrb[i] >= arra[i])
                {
                    diff = arrb[i] - arra[i];
                    arrb[i] -= diff;
                    arrb[i+1] -= 2*diff;
                    arrb[i+2] -= 3*diff;
                }

                else
                {
                    cout<<"NIE\n";
                    break;
                }

                if(i == n-3)
                {
                    if((arrb[i+1] == arra[i+1]) && (arrb[i+2] == arra[i+2]))
                    {
                        cout<<"TAK\n";
                        break;
                    }

                    else
                    {
                        cout<<"NIE\n";
                        break;
                    }
                }

                i++;
            }
        }

        }
    }
}
