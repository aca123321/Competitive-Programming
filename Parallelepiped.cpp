#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int a,b,c,ab,bc,ca,abc;

    cin>>ab>>bc>>ca;

    abc = sqrt(ab*bc*ca);

    a = abc/bc;
    b = abc/ca;
    c = abc/ab;

    cout<<4*(a+b+c);
}
