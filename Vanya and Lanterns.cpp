#include<iostream>
#include<iomanip>
using namespace std;

long long int* bubsort(long long int* , int);

main()
{
    long long int l,*a,i;
    float max_diff;
    int n,c=0;

    cin>>n;
    cin>>l;

    a = new long long int[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }


    a = bubsort(a,n);

    max_diff = (a[0]>(l-a[n-1]))?a[0]:(l-a[n-1]);

    for(i=1;i<n;i++)
    {
        if(((float(a[i]-a[i-1]))/2) > max_diff)
        {
           max_diff = (float(a[i]-a[i-1]))/2;
        }
    }

    cout<<fixed;
    cout<<setprecision(10);
    cout<<max_diff;


}

long long int* bubsort(long long int* a, int n)
{
    long long int i,j,k;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }

    return a;
}
