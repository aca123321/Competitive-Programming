#include<iostream>
using namespace std;

main()
{
    long long int n,q,*arr,a,i,j,val;

    cin>>n>>q;

    arr = new long long int[q];

    if(n%2 == 0) // n is even -> n/2
    {
        for(a=0;a<q;a++)
        {
            cin>>i>>j;

            if((i + j)%2 == 0) //even sum
            {
                val = (n/2)*(i-1) + ((j%2 == 0)?(j/2):((j+1)/2));
            }

            else // odd sum
            {
                val = ((n*n)/2) + (n/2)*(i-1) + ((j%2 == 0)?(j/2):((j+1)/2));
            }

            arr[a] = val;
        }
    }

    else // n is odd -> (n/2 + 1) terms each row
    {
        for(a=0;a<q;a++)
        {
            cin>>i>>j;

            if(i%2 == 0) //even row
            {
                if(j%2 == 0) // even sum
                {
                    val  = ((i-2)/2)*(n) + 3 + (j/2);
                }

                else // odd sum in even row
                {
                    val = ((n*n)/2) + 1 + ((i-2)/2)*(n) + 2 + ((j+1)/2);
                }
            }

            else // odd row
            {
                if(j%2 == 0) // odd sum in odd row
                {
                    val = ((n*n)/2) + 1 + ((i-1)/2)*(n) + (j/2);
                }

                else // even sum in odd row
                {
                    val = ((i-1)/2)*(n) + ((j+1)/2);
                }
            }

            arr[a] = val;
        }
    }

    for(i=0;i<q;i++)
    {
        cout<<arr[i]<<endl;
    }
}
