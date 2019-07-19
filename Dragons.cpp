#include<iostream>
using namespace std;

struct arr
{
    int x;
    int y;
};

arr* bubsort(arr*, int);

main()
{
    int s,n,i;
    arr *b;

    cin>>s>>n;

    b = new arr[n];

    for(i=0;i<n;i++)
    {
        cin>>b[i].x;
        cin>>b[i].y;
    }


            b = bubsort(b,n);

            for(i=0;i<n;i++)
            {
                if(s <= b[i].x)
                {
                    cout<<"NO";
                    break;
                }

                else
                {
                    if(i == n-1)
                    {
                        cout<<"YES";
                        break;
                    }

                    s += b[i].y;
                }

            }



}


arr* bubsort(arr* b, int n)
{
    int i,j,k;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[j].x < b[i].x)
            {
                k = b[i].x;
                b[i].x = b[j].x;
                b[j].x = k;

                k = b[i].y;
                b[i].y = b[j].y;
                b[j].y = k;
            }
        }
    }

    return b;
}
