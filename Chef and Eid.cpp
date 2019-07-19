#include<iostream>
#include<algorithm>
using namespace std;

void show(long long int*, long long int);

main()
{
    long long int n,*arr,*ans,t,i,k,j,a,b,temp;

    cin>>t;
    ans = new long long int[t];

    for(k=0;k<t;k++)
    {
        a=0;
        b=0;

        cin>>n;

        arr = new long long int[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr + n);
        //show(arr,n);

        for(i=0;i<n;i++)
        {
            if(a<=b)
            {
                a += arr[n-1-i];
            }

            else
            {
                b += arr[n-1-i];
            }
        }

        if((a-b) >= 0)
        {
            ans[k] = a-b;
        }

        else
        {
            ans[k] = b-a;
        }

    }

    for(k=0;k<t;k++)
    {
        cout<<ans[k]<<endl;
    }

}

void show(long long int* arr, long long int n)
{
    long long int i;

    cout<<endl;

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
