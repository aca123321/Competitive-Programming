#include<iostream>
using namespace std;

main()
{
    int n,p,q,i,j,*p1,*p2,*arr,count=0;;

    cin>>n;

    arr = new int[n];

    for(i=0;i<n;i++)
    {
        arr[i] = i+1;
    }

    cin>>p;
    p1 = new int[p];

    for(i=0;i<p;i++)
    {
        cin>>p1[i];
    }

    cin>>q;
    p2 = new int[q];

    for(i=0;i<q;i++)
    {
        cin>>p2[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            if(arr[i]==p1[j])
            {
                arr[i] = 0;
                count++;
                break;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            if(arr[i]==p2[j])
            {
                arr[i] = 0;
                count++;
                break;
            }
        }
    }

    if(count == n)
        cout<<"I become the guy.";

    else
        cout<<"Oh, my keyboard!";


}
