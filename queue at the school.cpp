#include<iostream>
#include<string>
using namespace std;


main()
{
    int n,t,i,j,k,l,*ptr;
    string str;

    cin>>n>>t;
    cin>>str;

    ptr = new int[(n/2)];

    for(j=0;j<t;j++)
    {
        k = 0;
        for(i=0;i<n;i++)
    {
        if((str[i]== 'B')&&(str[i+1]== 'G'))
            {
                ptr[k] = i;
                k++;
            }
    }

     for(i=0;i<k;i++)
    {
        l = str[ptr[i]];
        str[ptr[i]] = str[ptr[i]+1];
        str[ptr[i]+1] = l;
    }
    }



    cout<<str;

}
