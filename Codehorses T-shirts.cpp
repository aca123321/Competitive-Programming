#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,a,j,sum=0,l;

    cin>>n;

    string s[2*n];
    int arr[4][3]={0,0};

    for(i=0;i<(n);i++)
    {
        a = 0;
        j = 0;
        cin>>s[i];

        a = s[i].length() - 1;

        if(a == 0)
        {
            if(s[i][a] == 'S')
            {
                arr[a][0]++;
            }

            else if(s[i][a] == 'M')
            {
                arr[a][1]++;
            }

            else
            {
                arr[a][2]++;
            }
        }

        else
        {
            if(s[i][a] == 'S')
            {
                arr[a][0]++;
            }

            else
            {
                arr[a][2]++;
            }
        }
    }


    for(i=0;i<(n);i++)
    {
        a = 0;
        cin>>s[n+i];

        a = s[n+i].length() - 1;

        if(a == 0)
        {
            if(s[n+i][a] == 'S')
            {
                arr[a][0]--;
            }

            else if(s[n+i][a] == 'M')
            {
                arr[a][1]--;
            }

            else
            {
                arr[a][2]--;
            }
        }

        else
        {
            if(s[n+i][a] == 'S')
            {
                arr[a][0]--;
            }

            else
            {
                arr[a][2]--;
            }
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            sum += abs(arr[i][j]);
        }
    }

    cout<<sum/2;

}
