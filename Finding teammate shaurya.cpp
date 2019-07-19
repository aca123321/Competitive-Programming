#include<bits/stdc++.h>

using namespace std;

bool comp(long long int , long long int );

long long int fact(long long int x)
{

    if(x==0)
    {

        return 1;

    }

    return(x*fact(x-1));

}

#define comb(n,m) (fact(n) / ( ( fact(n-m) ) * ( fact(m) ) ) )

long long int solve(long long int *set,long long int sum,long long int i)
{

    if(set[i]!=0)

        {

            if(set[i]%2==0)

            {

                if(set[i+1] != 0)
                {
                    sum = comb(set[i],2)*solve(set,sum,i+1);
                }



            }

            else

            {

                long long int except;

                except=set[i];

            }

            return sum;

        }

    else

    {

        return 1;

    }

}

main()

{

    long long int t,i,j,n,*arr,*set;

    cin>>t;

    while(t--)

    {

        cin>>n;

        arr = new long long int[n];

        set = new long long int[n];

        cin>>arr[0];

        set[0] = 1;

        for(i=1;i<n;i++)

        {

            cin>>arr[i];

        }

        sort(arr,arr+n,comp);

        j = 0;

        for(i=1;i<n;i++)

        {

            if(arr[i] != arr[i-1])

            {

                j++;

            }

            set[j]++;

        }

        for(i=j+1;i<n;i++)

        {

            set[i] = 0;

        }


        long long int sum=1;

        i=0;

        solve(set,sum,i);

    }

}

bool comp(long long int a, long long int b)

{

    if(a>b)

    {

        return true;

    }

    return false;

}

