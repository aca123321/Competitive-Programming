#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli power(lli , lli );

lli fact(lli a)
{
    if(a <= 1)
    {
        return 1;
    }

    return (a * fact(a-1));
}

long double comb(lli n, lli r)
{
    long double ans = 1,i,min=r;

    if((n-r)<(r))
    {
        min = n-r;
    }

    for(i=0;i<min;i++)
    {
        ans *= (n-i);
    }

    ans = (ans/(fact(min)));

    return ans;
}


main()
{
    string a,b;
    lli i,diff=0,uk=0,csum=0,sum=0; // uk = unknown
    long double ans;


    cin>>a;
    cin>>b;

    for(i=0;i<a.length();i++)
    {
        if(a[i] == '+')
        {
            csum++;
        }

        else
        {
            csum--;
        }
    }

    for(i=0;i<b.length();i++)
    {
        if(b[i] == '+')
        {
            sum++;
        }

        else
        {
            if(b[i] == '-')
            {
                sum--;
            }

            else
            {
                uk++;
            }
        }
    }

    diff = csum - sum;

    if(abs(diff)>uk)
    {
        ans = 0;
    }

    else
    {
        if(uk == 0)
        {
            if(diff != 0)
            {
                ans = 0;
            }

            else
            {
                ans = 1;
            }
        }

        else
        {
            if((uk - diff)%2 == 0)
        {
            if(diff == 0)
            {
                ans = (comb(uk,(uk/2))/power(2,uk));
            }

            else
            {
                ans = ((comb(uk,(uk-diff)/2))/power(2,uk))   ;
            }
        }

        else
        {
            ans = 0;
        }
        }
    }

    cout<<fixed;
    cout<<setprecision(10);
    cout<<ans;

}

long long int power(long long int a, long long int b)
{
    long long int i,temp = a;

    for(i=0;i<b-1;i++)
    {
        a *= temp;
    }

    if(b == 0)
    {
        return 1;
    }

    return a;
}
