#include<bits/stdc++.h>
using namespace std;

#define lli long long int

struct two
{
    lli type,nos;
};

main()
{
    long double t,n,j,num,i;
    long double ratio;
    char c;

    cin>>t;

    while(t--)
    {
        cin>>n;

        struct two *arr = new struct two[n];

        j = 0;

        cin>>num;
        cin>>c;

        if(c == 'A')
        {
            arr[j].type = 1;
        }

        else
        {
            arr[j].type = 2;
        }

        arr[j].nos = num;

        j++;

        for(i=1;i<n;i++)
        {
            cin>>num;
            cin>>c;

            if(c == 'A')
            {
                arr[j].type = 1;
            }

            else
            {
                arr[j].type = 2;
            }

            if(arr[j].type == arr[j-1].type)
            {
                arr[j-1].nos += num;
                j--;
            }

            else
            {
                arr[j].nos = num;
            }

            j++;

        }

        for(i=0;i<j;i++)
        {
            cout<<arr[i].nos<<" "<<arr[i].type<<endl;
        }

        if(j<=1)
        {
            cout<<arr[0].nos;
        }

        else
        {
            for(i=1;i<arr[1].nos;i++)
            {
                if(((arr[0].nos)/(i)) == ((arr[2].nos)/(arr[1].nos - i)))
                {
                    ratio = ((arr[0].nos)/(i));
                    break;
                }
            }


        }

    }
}
