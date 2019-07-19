#include<iostream>
using namespace std;

main()
{
    int n,k,t,count,d,i,j,*ans,a,b;

    cin>>t;

    ans = new int[t];

    for(j=0;j<t;j++)
    {
        count = 1;
        a = 0;

        cin>>d>>k>>n;

        for(i=0;i<n;i++)
        {
            b = a;
            cin>>a;

            if((a-b)>k)
            {
                count += (a-b)/k;
            }

            if(a != b)
            {
                count++;
            }
        }

        ans[j] = count;
    }

    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
}
