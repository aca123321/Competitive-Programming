#include<iostream>
#include<string>
using namespace std;

main()
{
    string x;
    int n,i,j;

    cin>>x;
    n = x.length();
    j = 0;

    for(i=1;i<n;i++)
    {
        if((x[i]>64)&&(x[i]<91))  // if x[i] is an uppercase letter
            j++;
    }

    if(j==n-1)     // caps lock condition
    {
        for(i=0;i<n;i++)
        {
            if((x[i]>64)&&(x[i]<91))
//                x[i] += 32;

            else
                x[i] -= 32;
        }
    }

    cout<<x;
}
