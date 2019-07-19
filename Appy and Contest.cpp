#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,k,t,a,b,y,i,count,lcm;

    cin>>t;
    string s[t];

    for(i=0;i<t;i++)
    {
        cin>>n>>a>>b>>k;
        count = 0;

        lcm = (((a)*(b))/(__gcd((a),(b))));

        if(a <= n)
        {
            y = floor((double(double(n)/double(a)))*double(a));
            count += ((y-a)/a)+1;
        }

        if(b <= n)
        {
            y = ((double(double(n)/double(b)))*double(b));
            count += ((y-b)/b)+1;
        }

        if(lcm <= n)
        {
            y = ((double(double(n)/double(lcm)))*double(lcm));
            count -= 2*(((y-lcm)/lcm)+1);
        }

        if(count >= k)
        {
            s[i] = "Win";
        }

        else
        {
            s[i] = "Lose";
        }
    }

    for(i=0;i<t;i++)
    {
        cout<<s[i];

        if(i != t-1)
        {
            cout<<endl;
        }
    }
}
