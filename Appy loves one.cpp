#include<bits/stdc++.h>
using namespace std;

#define lli long long int

struct setstruct
{
    int start,end,size;
};



main()
{
    lli n,j,q,k,*arr,*query,i,setcount=0,setseligib=0,max = 0,potential = 0;
    string str;

    cin>>n>>q>>k;

    struct setstruct *set;

    set = new struct setstruct[(n/2) +2];

    arr = new lli[n];
    query = new lli[q];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>str; // string length = q

    for(i=0;i<q;i++)
    {
        if(str[i] == '!')
        {
            query[i] = 1;
        }

        else
        {
            query[i] = 0;
        }
    }

    j = 0;
    i = 0;

    while(i<n)
    {
        if(arr[i] == 1)
        {
            set[j].start = i;

            while(i<(n-1))
            {
                if(arr[i+1] == 0)
                {
                    set[j].end = i;
                    set[j].size = (set[j].end - set[j].start + 1);
                    setcount++;
                    if(set[j].size > max)
                    {
                        max = set[j].size;
                    }

                    j++;
                    break;
                }

                i++;
            }   }
            i++;
    }

    if(arr[n-1] == 1)
    {
        if(arr[n-2] == 1)
        {
            set[j].end = n-1;
            set[j].size = (set[j].end - set[j].start + 1);
            if(set[j].start == n-2)
            {
                setcount++;
            }
            if(set[j].size > max)
            {
                max = set[j].size;
            }
        }

        if(arr[0] == 1 && setcount >= 2)
        {
            potential = set[0].size + set[j].size;
        }
    }



    cout<<setcount<<endl;

    for(i=0;i<setcount;i++)
    {
        cout<<set[i].start<<" "<<set[i].end<<" "<<set[i].size<<endl;
    }




}
