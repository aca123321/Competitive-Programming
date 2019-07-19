#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,t,nr,j,ng,flag;

    string str,*ans;

    char temp;

    cin>>t;
    ans = new string[t];

    j = 0;

    while(t--)
    {
        cin>>str;

        nr = 0;
        ng = 0;

        flag = 0;

        if(str.length() % 2 != 0)
        {
            ans[j] = "no";
            j++;
        }

        else
        {
            for(i=0;i<str.length();i++)
            {
                if(str[i] == 'R')
                {
                    nr++;
                }

                else
                {
                    ng++;
                }
            }

            if(str.length() == 2)
            {
                if(nr == ng)
                {
                    ans[j] = "yes";
                    j++;
                }

                else
                {
                    ans[j] = "no";
                    j++;
                }
            }

            else
            {
                for(i=1;i<(str.length() - 1);i++)
                {
                    if( (str[i] == str[i-1]) && (str[i] != str[i+1]) )
                    {
                        temp = str[i];
                        str[i] = str[i+1];
                        str[i+1] = temp;
                    }
                }

                for(i=1;i<(str.length());i++)
                {
                    if(str[i] == str[i-1])
                    {
                        ans[j] = "no";
                        j++;
                        flag = 1;
                        break;

                    }
                }

                if(flag == 0)
                {
                    ans[j] = "yes";
                    j++;
                }
            }
        }
    }

    for(i=0;i<j;i++)
    {
        cout<<ans[i]<<endl;
    }
}
