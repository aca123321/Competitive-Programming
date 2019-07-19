#include<bits/stdc++.h>
using namespace std;

main()
{
    long int i,n,count=0,arr[5]={0};
    string s;

    cin>>n;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i] == 'a' && arr[0] == 0)
        {
            count++;
            arr[0]++;
        }
        if(s[i] == 'e' && arr[1] == 0)
        {
            count++;
            arr[1]++;
        }
        if(s[i] == 'i' && arr[2] == 0)
        {
            count++;
            arr[2]++;
        }
        if(s[i] == 'o' && arr[3] == 0)
        {
            count++;
            arr[3]++;
        }
        if(s[i] == 'u' && arr[4] == 0)
        {
            count++;
            arr[4]++;
        }

        if(count>=4)
        {
            break;
        }
    }

    if(count>=4)
    {
        cout<<"Yes";
    }

    else
    {
        cout<<"No";
    }

}
