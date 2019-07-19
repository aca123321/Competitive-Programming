#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli i,n,x,y,sum=0,a,b,c,t,flag;
    cin>>t;
    vector<lli> v;

    while(t--)
    {
        cin>>n;
        v.clear();
        flag = 0;

        for(i=0;i<n;i++)
        {
            cin>>a;
            v.pb(a);
        }

        sum = 1;
        sort(v.begin(),v.end());

        for(i=0;i<n;i++)
        {
            sum = (sum*v[i])/(__gcd(sum,v[i]));
        }

        if(n%2 == 0)
        {
            for(i=0;i<(n/2);i++)
            {
                a = v[i];
                b = v[n-1-i];
                c = a*b;

                if(c != sum)
                {
                    if(c%sum != 0)
                    {
                        cout<<-1<<endl;
                        flag = 1;
                    }
                    else
                    {
                        if(sum<c)
                        {
                            sum = c;
                        }
                    }
                }

                if(flag == 1)
                {
                    break;
                }
            }
        }

        else
        {
            for(i=0;i<(n/2);i++)
            {
                a = v[i];
                b = v[n-1-i];
                c = a*b;

                if(c != sum)
                {
                    if(c%sum != 0)
                    {
                        cout<<-1<<endl;
                        flag = 1;
                    }
                    else
                    {
                        if(sum<c)
                        {
                            sum = c;
                        }
                    }
                }

                if(flag == 1)
                {
                    break;
                }
            }

            if((v[n/2]*v[n/2])%sum != 0 && flag == 0)
            {
                cout<<-1<<endl;
                continue;
            }
            else if((v[n/2]*v[n/2])%sum == 0 && flag == 0)
            {
                sum = (v[n/2]*v[n/2]);
            }
        }

        if(flag == 0)
        {
            for(i=0;i<n;i++)
            {
                if(sum == v[i])
                {
                    sum *= 2;
                }

                if(sum%v[i] != 0)
                {
                    cout<<-1<<endl;
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                cout<<sum<<endl;
            }
        }
    }


}

