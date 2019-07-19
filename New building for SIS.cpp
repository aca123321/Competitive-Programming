#include<iostream>
using namespace std;

main()
{
    long long int n,h,a,b,k,*ans,ta,fa,tb,fb,i,time;

    cin>>n>>h>>a>>b>>k;

    ans = new long long int[k];

    for(i=0;i<k;i++)
    {
        time = 0;

        cin>>ta>>fa>>tb>>fb;

        if(ta != tb)
        {
            time += (tb>ta)?(tb-ta):(ta-tb);

            if((fa<a) || (fa>b))
            {
                if(fa <= a)
                {
                    time += a - fa;
                    time += (fb>a)?(fb-a):(a-fb);
                }

                else
                {
                    time += fa-b;
                    time += (fb>b)?(fb-b):(b-fb);
                }
            }

            else
            {
                time += (fb>fa)?(fb-fa):(fa-fb);
            }
        }

        else
        {
            time = (fb>=fa)?(fb-fa):(fa-fb);
        }

        ans[i] = time;
    }

    for(i=0;i<k;i++)
    {
        cout<<ans[i]<<endl;
    }

}
