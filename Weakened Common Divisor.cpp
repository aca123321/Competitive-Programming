#include<iostream>
using namespace std;

int main()
{
    long long int n,*arr,i,j,*cd,big,k,count=0;

    cin>>n;

    arr = new long long int[2*n];


    for(i=0;i<n;i++)
    {
        cin>>arr[2*i]>>arr[(2*i)+1];
    }

    if(arr[0]>arr[1])
    {
        big = arr[0];
    }

    else
    {
        big = arr[1];
    }

    cd = new long long int[big];

    for(i=0;i<big;i++)
    {
        cd[i] = 0;
    }

    j=0;

    for(i=2;i<big;i++)
    {
        if((arr[0]%i == 0) || (arr[1]%i == 0))
        {
            cd[j] = i;
            j++;
        }
    }

    for(k=0;k<j;k++)
    {
        for(i=1;i<n;i++)
        {
            if((arr[2*i]%(cd[k]) != 0) && (arr[(2*i)+1]%(cd[k]) != 0))
            {
                cd[k] = 0;
                break;
            }
        }
    }

    for(i=0;i<j;i++)
    {
        if(cd[i] != 0)
        {
            count++;
            cout<<cd[i];
            break;
        }
    }

    if(count == 0)
    {
        cout<<"-1";
    }

    return 0;
}
