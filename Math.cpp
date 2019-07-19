#include<bits/stdc++.h>
using namespace std;

#define lli long long int

struct two
{
    lli num,count=0;
};

main()
{
    lli min,flag = 0,n,i,j=0,primes=0,temp,temper,x=0,p,q,tot=INT_MAX,count=0;

    cin>>n;
    temp = n;

    two *arr = new two[n];

    if(n%2 == 0)
    {
        arr[j].num = 2;
        primes++;
        while(n%2 == 0)
        {
            arr[j].count ++;
            n = n/2;
        }
    }

    if(n < temp)
    {
        j++;
    }

    for(i=3;i<=sqrt(temp);i+=2)
    {
        if(n%i == 0)
        {
            primes++;
            temper = n;
            arr[j].num = i;

            while(n%i == 0)
            {
                arr[j].count ++;
                n = n/i;
            }

            if(n<temper)
            {
                j++;
            }
        }
    }

    if(n>2)
    {
        primes++;
        arr[j].num = n;
        arr[j].count = 1;
    }

    min = 1;

    for(i=0;i<primes;i++)
    {
        min *= arr[i].num;
    }

    count = 0;
    tot = temp;

    while(tot > min)
    {

            x = 0;

            q = arr[0].count

            for(i=0;i<primes;i++)
            {
                if()
            }

            for(i=0;i<primes;i++)
            {
                if(arr[i].count % 2 == 0)
                {
                    arr[i].count /= 2;
                }

                else
                {
                    if(arr[i].count!= 1)
                    {
                        arr[i].count += 1;
                        arr[i].count /= 2;
                        x = 1;
                    }
                }
            }

            if(x == 1)
            {
                count += 2;
            }

            else
            {
                count += 1;
            }


        tot = pow(arr[0].num,arr[0].count);

        for(i=1;i<primes;i++)
        {
            tot *= pow(arr[i].num,arr[i].count);
        }

        if(tot == min)
        {
            break;
        }
    }

    cout<<min<<" "<<count;

}
