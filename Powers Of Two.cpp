#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli power(lli c,lli d)
{
    if(d == 1)
    {
        return c;
    }

    return(c*pow(c,d-1));
}

main()
{
    lli i,n,k,j=0,arr[30]={0},brr[30]={0},count=0,a,one=0,two=0,diff,end;

    cin>>n>>k;

    if(k>n)
    {
        cout<<"NO";
    }

    else
    {
        a = n;

        while(a != 0)
        {
            arr[j++] = a%2;
            a /= 2;
        }

        for(i=0;i<30;i++)
        {
            if(arr[i] != 0)
            {
                count++;
            }
        }

        if(k<count)
        {
            cout<<"NO";
        }

        else
        {
            diff = n-k;
            brr[0] = n;

            for(i=0;i<30;i++)
            {
                if(diff>=((brr[i])/2))
                {
                    brr[i+1] += ((brr[i])/2);
                    diff -= ((brr[i])/2);
                    brr[i] -= (2*((brr[i])/2));
                }

                else
                {
                    brr[i] -= (2*diff);
                    brr[i+1] += diff;
                    diff = 0;
                    break;
                }
            }

            cout<<"YES\n";

            for(i=0;i<30;i++)
            {
                if(brr[i] != 0)
                {
                    a = power(2,i);

                    for(j=0;j<brr[i];j++)
                    {
                        cout<<a<<" ";
                    }
                }
            }

        }
    }
}
