#include<bits/stdc++.h>

using namespace std;



bool comp(long long int ,long long int );



long long int fact(long long int x)

{

    if(x <= 1)

    {

        return 1;

    }



    return(x*fact(x-1));

}



long long int comb(long long int n,long long int m)

{

	if(n <= m)

	{

		return 1;

	}

	return (fact(n) / ( ( fact(n-m) ) * ( fact(m) ) ) );

}

main()

{

    long long int t,k,i,j,n,res,*arr,*set,*ans;



    cin>>t;
    ans = new long long int[t];


    for(k=0;k<t;k++)

    {



        cin>>n;



        arr = new long long int[n];

        set = new long long int[n+2];



        set[0] = 1;



        for(i=0;i<n;i++)

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

                set[j] = 0;

            }



            set[j]++;

        }



        for(i=j+1;i<n+2;i++)

        {

            set[i] = 0;

        }



        res=1;


        i=0;



        while(1)

        {



            if(set[i] > 0)

            {



                if(set[i]%2 == 0)

                {

                    res *= comb(set[i],2);

                }



                else

                {

                        res *= comb(set[i]-1,2)*set[i]*set[i+1];

                        if(set[i+1] != 0)
                        {
                            set[i+1] = set[i+1] - 1;
                        }


                }



                i++;

            }





            else

            {

                if(set[i+1] != 0)

                {

                    i++;

                }



                else

                {

                    break;

                }

            }

        }

        ans[k] = ((res)%1000000007);

    }

    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }

}



bool comp(long long int a,long long int b)

{

    if(a>b)

    {

        return true;

    }



    return false;

}
