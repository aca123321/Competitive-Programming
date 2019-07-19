#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,k,i,j,even,odd,count,flag,a,b,c,d,l,flagg,m,*arr;

    cin>>t;
    lli marr[t] = {-1};

    arr = new lli[1003];

    j=0;

    while(t--)
    {
        cin>>k;

        vector <lli> v;

        count = 0;
        flag = 0;
        flagg = 0;
        even = 0;
        odd = 0;

        for(i=0;i<k;i++)
        {
            cin>>arr[i];
            if(arr[i]%2 == 0)
            {
                even++;
            }

            else
            {
                odd++;
                v.push_back(arr[i]);
            }
        }

        if(odd%2 == 0)
        {
            count += odd + even;
        }

        else
        {
            count += odd + even - 1;

            m = 1;

            for(i=0;i<odd;i++)
            {
                while(m <= (v[i]/2))
                {
                    a = 2*m;
                    b = v[i] - a;

                    for(l=0;l<64;l++)
                    {
                        c = v[i]&(1<<l);
                        d = b&(1<<l);

                        if((d == 1 && (c == 0)))
                        {
                            count += min(v[i]-pow(2,(1<<l)),pow(2,(1<<l)));
                            flagg = 0;
                            break;
                        }

                        cout<<l<<" ";

                        if(l == 63)
                        {
                            flagg = 1;
                        }
                    }

                    if(flagg == 0)
                    {
                        flag = 0;
                        break;
                    }

                    else if(m == (v[i]/2))
                    {
                        flag = 1;
                    }

                    m++;
                }
            }
        }

        if(flag == 0)
        {
            marr[j] = count;
        }

        else
        {
            marr[j] = -1;
        }
        j++;
    }

    for(i=0;i<j;i++)
    {
        cout<<marr[i];

        if(i != j-1)
        {
            cout<<endl;
        }
    }
}
