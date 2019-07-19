#include<bits/stdc++.h>
#include <stdint.h>
using namespace std;

#define lli unsigned long long
#define pb push_back

/*
lli numeven(lli n)
{
    return ((2*(power(4,n)-1))/3);
}

lli numodd(lli n)
{
    return ((power(4,n)-1)/3);
}


lli sumeven(lli n)
{
    return (power(n,2)+n);
}

lli sumodd(lli n)
{
    lli a = power(n,2);
    cout<<power(n,2)<<endl;
    return a;
}
*/

lli power(lli a, lli b)
{
    if(b == 0)
    {
        return 1;
    }

    else if(b == 1)
    {
        return a;
    }

    else
    {
        return (a*(power(a,b-1)));
    }
}

lli sumtill(lli n, lli extra)
{
    lli ne,no,ans=0;

    if(n%2 == 0)
    {
        ne = n/2;
        no = (n/2);
        ne = ((2*(power(4,ne)-1))/3);
        no = ((power(4,no)-1)/3)+extra;
        ans = (ne*ne) + ne + ((no)*(no));
    }

    else
    {
        ne = (n/2);
        no = n - ne;
        ne = ((2*(power(4,ne)-1))/3)+extra;
        no = ((power(4,no)-1)/3);
        ans = (ne*ne) + ne + ((no)*(no));
    }

    return ans;
}

lli which(lli n, lli extra)
{
    lli no,ne,ans;

    if(n%2 == 0)
    {
        no = (n/2)+extra;

        ans = (2*no) - 1;
    }

    else
    {
        ne = (n/2)+extra;

        ans = (2*ne);
    }

    return ans;
}

main()
{
    lli n,i,l,r,bl,br,count = 0,a=0,b=0;

    cin>>l>>r;

    for(i=1;i<999999999;i++)
    {
        if(power(2,i)-1 >= l && a == 0)
        {
            bl = i-1;
            a = 1;
        }

        if( power(2,i)-1 >= r && b == 0)
        {
            br = i-1;
            b = 1;
        }

        if(a == 1 && b == 1)
        {
            break;
        }
    }

    lli extral , extrar;
    extral = l-power(2,bl)+1;
    extrar = r-power(2,br)+1;

    lli ans = sumtill(br,extrar) - sumtill(bl,extral);

    cout<<br<<" "<<extrar<<endl;
    cout<<bl<<" "<<extral<<endl;
    cout<<sumtill(br,extrar)<<" "<<sumtill(bl,extral)<<endl;
    cout<<which(bl,extral)<<endl;
    ans +=  which(bl,extral);

    cout<<ans%(1000000007);
}
