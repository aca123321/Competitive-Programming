#include<iostream>
#include<string>
using namespace std;

int* bubsort(int* , int);

main()
{
    int n,i,j,*a,k,sum=0,count=1,l;
    string s;

    cin>>n>>k;
    cin>>s;

    a = new int[n];

    for(i=0;i<n;i++)
    {
        a[i] = int(s[i]) - 96;
    }

    a = bubsort(a,n);

    sum = a[0];
    l=0;

    for(i=0;i<k-1;i++)
    {
        for(j=l+1;j<n;j++)
        {

            if( a[j] > (a[l]+1) )
            {
                l = j;
                sum += a[j];
                count++;
                break;
            }

        }
    }

    if(count<k || k > n)
    {
        cout<<"-1";
    }

    else if(count == k)
    {
        cout<<sum;
    }


}


int* bubsort(int* a, int n)
{
    int i,j,k;

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
