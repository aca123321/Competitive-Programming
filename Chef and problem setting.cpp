#include<iostream>
#include<string>
using namespace std;

struct sol
{
    string s,res;
};

main()
{
    sol *arr;
    int t,n,m,i,j,a,k,count;
    string *ans;

    cin>>t;
    ans = new string[t];


    for(k=0;k<t;k++)
    {
        cin>>n>>m;

        arr = new sol[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i].s;
            cin>>arr[i].res;
        }
    }






    for(k=0;k<t;k++)
    {
        for(i=0;i<n;i++)
        {
            a = 0;
            count = 0;

            if(arr[i].s == "correct")
            {
                for(j=0;j<m;j++)
                {
                    if(arr[i].res[j] != '1')
                    {
                        a = 1;
                        ans[k] = "INVALID";
                        break;
                    }
                }
            }


        else if(a != 1)
        {
            for(j=0;j<m;j++)
            {
                if(arr[i].res[j] == '1')
                {
                    count++;
                }
            }

            if(count == (m))
            {
                ans[k] = "WEAK";
                a = 1;
                break;
            }
        }


        if(a == 0)
        {
            ans[k] = "FINE";
        }
        }
    }







    for(k=0;k<t;k++)
    {
        cout<<ans[k]<<endl;
    }
}
