#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli a,r,i,g,b,w,flag,t,no=0,ne=0;
    lli arr[4];

    cin>>t;

    while(t--)
    {
        no = 0;
        ne = 0;
        flag = 0;
        for(i=0;i<3;i++)
        {
            cin>>arr[i];
            if(arr[i]%2 == 0)
            {
                ne++;
            }
            else
            {
                no++;
            }
        }
        cin>>arr[3];
        /*
        cout<<no<<" "<<ne<<" "<<arr[3]<<endl;
        cout<<no%2<<" "<<ne%2<<" "<<arr[3]%2<<endl;
        */

        if(no == 3)
        {
            cout<<"Yes\n";
            flag = 1;
        }
        else if(ne == 3)
        {
            cout<<"Yes\n";
            flag = 1;
        }
        else if(no == 1 && ne == 2 && arr[3]%2 == 0)
        {
            cout<<"Yes\n";
            flag = 1;
        }
        else if(no == 2 && ne == 1 && arr[3]%2 != 0)
        {
            for(i=0;i<3;i++)
            {
                if(arr[i] == 0)
                {
                    cout<<"No\n";
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                cout<<"Yes\n";
            }
        }
        else
        {
            cout<<"No\n";
        }
    }

}
