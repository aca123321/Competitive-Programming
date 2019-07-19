#include<iostream>
#include<string>
using namespace std;

int* magic_combo(int*, int, int, long long);
int* bubsort(int*, int);

int main()
{
    string *str;
    int *arr, t, n, k, i, j;
    long long v;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n>>k>>v;

        str = new string[n];
        arr = new int[k];  //To keep an index of which strings to print long out

        for(j=0;j<n;j++)
        {
            cin>>str[j];
        }

        arr = magic_combo(arr, n, k, v);
        arr = bubsort(arr, k);

        for(j=0;j<k;j++)
        {
            cout<<str[arr[j]]<<" ";
        }

        cout<<endl;
    }
    return 0;
}

int* magic_combo(int* arr, int n, int k, long long v)
{
    int i;

    if(k == n)
    {
        for(i=0;i<k;i++)
        {
            arr[i] = i;
        }
    }

    else if(((k*(v%n))%n) < k)
    {
        for(i=0;i<(k*(v%n)%n);i++)
        {
            arr[i] = i;
        }

        i = k - (k*(v%n)%n); //removing overflow

        while(i)
        {
            arr[k-i] = n-i;
            i--;
        }
    }

    else
    {
        for(i=0;i<k;i++)
        {
            arr[i] = ((k*(v%n)%n)-1)-i;
        }
    }

    return arr;
}

int* bubsort(int* arr, int n)
{
    int i,j,l;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                l = arr[i];
                arr[i] = arr[j];
                arr[j] = l;
            }
        }
    }

    return arr;
}


