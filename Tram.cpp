#include<iostream>
using namespace std;

main()
{
    int pre, a, b, i, n, x;

    pre = x = 0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;

        pre += b-a;
        if(pre>x)
            x = pre;

    }

    cout<<x;

}
