#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

float fun(float x, float* coeff, float n)
{
    float ans=0;
    int i;

    for(i=n;i>=0;i--)
    {
        ans += coeff[i]*(pow(x,i));
    }

    return ans;
}

main()
{
    float coeff[9999]={0},low,high,mid,x,a,b,c,d,e;
    int i,j=0,n;

    cout<<"Enter the degree of the equation\n";
    cin>>n;

    cout<<"Enter the coefficients of the equation in order\n";
    for(i=0;i<=n;i++)
    {
        cin>>coeff[n-i];
    }

    cout<<"Enter the lower value\n";
    cin>>low;
    cout<<"Enter the higher value\n";
    cin>>high;

    mid = (low+high)/2;
    cout<<"mid is "<<mid<<endl;


    while((fun(mid,coeff,n) >= 0.0000009999 || fun(mid,coeff,n) <= -0.0000009999) && j<1000)
    {
        b = fun(mid,coeff,n);
        a = fun(low,coeff,n);
        c = fun(high,coeff,n);

        if(a>0)
        {
            if(c<0)
            {
                if(b>0)
                {
                    low = mid;
                }

                else
                {
                    high = mid;
                }
            }

            else
            {
                if(b>0)
                {
                    if(mid-low < high-mid)
                    {
                        low = mid;
                    }

                    else if(mid-low > high-mid)
                    {
                        high = mid;
                    }

                    else
                    {
                        d = (a-b)>=0?(a-b):(b-a);
                        e = (c-b)>=0?(c-b):(c-a);

                        if(d<e)
                        {
                            high = mid;
                        }

                        else
                        {
                            low = mid;
                        }
                    }
                }

                else
                {
                    high = mid;
                }
            }
        }

        else
        {
            if(c<0)
            {
                if(b>0)
                {
                    low = mid;
                }

                else
                {
                    if(mid-low <= high-mid)
                    {
                        low = mid;
                    }

                    else
                    {
                        high - mid;
                    }
                }
            }

            else
            {
                if(b>0)
                {
                    high = mid;
                }

                else
                {
                    low = mid;
                }
            }
        }

        mid = (low+high)/2;
        j++;
    }

    cout<<mid<<" is a root of the equation\n";
}
