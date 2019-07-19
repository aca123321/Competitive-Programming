#include<bits/stdc++.h>
using namespace std;

#define lli long int

main()
{
    lli n,t,i,j,k;
    cin>>t;
    string s[1001];
    lli arr[26] = {0};
    lli ans[t] = {0};

    for(k=0;k<t;k++)
    {
        cin>>n;

        for(i=0;i<26;i++) // initialises arr to 0
        {
            arr[i] = 0;
        }

        for(i=0;i<n;i++)
        {
            s[i] = "";
            cin>>s[i];

            for(j=0;j<s[i].length();j++)
            {
                if(i%2 == 0) // if i = 0,2,4,6... , increment and convert to negative
                {
                    if(arr[int(s[i][j]) - int('a')] > 0)
                    {
                        arr[int(s[i][j]) - int('a')] = -1*(arr[int(s[i][j]) - int('a')] + 1);
                    }

                    if(arr[int(s[i][j]) - int('a')] == 0)
                    {
                        arr[int(s[i][j]) - int('a')] = -1;
                    }
                }

                else // if i = 0,2,4,6... , decrement and convert to positive
                {
                    if(arr[int(s[i][j]) - int('a')] < 0)
                    {
                        arr[int(s[i][j]) - int('a')] = -1*(arr[int(s[i][j]) - int('a')] - 1);
                    }

                    if(arr[int(s[i][j]) - int('a')] == 0)
                    {
                        arr[int(s[i][j]) - int('a')] = 1;
                    }
                }
            }

            if(i%2 == 0)
            {
                for(j=0;j<26;j++)
                {
                    if(arr[j] > 0)
                    {
                        arr[j] = -1*arr[j];
                    }
                }
            }

            else
            {
                for(j=0;j<26;j++)
                {
                    if(arr[j] < 0)
                    {
                        arr[j] = -1*arr[j];
                    }
                }
            }
        }

        for(j=0;j<26;j++)
        {
            if(arr[j] < 0)
            {
                arr[j] = -1*arr[j];
            }
        }

        for(j=0;j<26;j++)
        {
            if(arr[j] == n)
            {
                ans[k]++;
            }
        }
    }

    for(i=0;i<t;i++)
    {
        cout<<ans[i];
        if(i != t-1)
        {
            cout<<endl;
        }
    }

}
