#include<bits/stdc++.h>

#define lli long long int

main()
{
    int n;
    int i;
    int flag=0;
    int *arr;
    int count = 0;
    int temp;

    std::cin>>n;
    arr = new int[n];


    for(i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }

    if(n>=2)
    {
        if(arr[1] == 2)
        {
            count++;
        }

        if(arr[n-2] == 999)
        {
            count++;
        }
    }

    if(n == 1)
    {
        std::cout<<"0";
        flag = 1;
    }

    if(flag == 0)
    {
        for(i=1;i<(n-1);i++)
        {
            temp = arr[i];
            if((arr[i-1] == temp -1)&&(arr[i+1] == temp+1))
            {
                count++;
            }
        }
    }

    if(flag != 1)
    {
        std::cout<<count;
    }
}
