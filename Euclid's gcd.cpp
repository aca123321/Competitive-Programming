#include<bits/stdc++.h>
using namespace std;

int gcd(int, int);

main()
{
    cout<<gcd(24,72)<<endl; //1st method - calling a function you made
    cout<<(__gcd(4,72));  // 2nd method - standard library function (<double-underscore><gcd>(<2 parameters>))
}

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }

    return(gcd(b,(a%b)));
}
