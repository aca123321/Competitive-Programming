#include<bits/stdc++.h>
#include<string.h>
using namespace std;

main()
{
    int t,l,r,i,start,end,dur,answer,count,k=0,*ans,temp;

    string str1,str2,*week;

    cin>>t;
    ans = new int[t];

    temp = t;

    week = new string[8];

    week[1] = "monday";
    week[2] = "tuesday";
    week[3] = "wednesday";
    week[4] = "thursday";
    week[5] = "friday";
    week[6] = "saturday";
    week[7] = "sunday";

    while(t--)
    {
        cin>>str1;

        count = 0;

        for(i=1;i<8;i++)
        {
            if(str1.compare(week[i]) == 0)
            {
                start = i;
            }
        }

        cin>>str2;

        cin>>l>>r;

        for(i=1;i<8;i++)
        {
            if(str2.compare(week[i]) == 0)
            {
                end = i;
            }
        }

        if(end <= start)
        {
            end += 7;
        }

        dur = end - start + 1;

        for(i=l;i<=r;i++)
        {
            if(i>=dur)
            {
                if((i-dur)%7 == 0)
                {
                    count++;
                    answer = i;
                }
            }

            if(count >= 2)
            {
                ans[k] = 0;
                k++;
                break;
            }
        }

        if(count == 1)
        {
            ans[k] = answer;
            k++;
        }

        if(count == 0)
        {
            ans[k] = -1;
            k++;
        }
    }

    for(i=0;i<temp;i++)
    {
        if(ans[i] == -1)
        {
            cout<<"impossible\n";
        }

        else if(ans[i] == 0)
        {
            cout<<"many\n";
        }

        else
        {
            cout<<ans[i]<<endl;
        }
    }

}
