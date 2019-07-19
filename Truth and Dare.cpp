#include<bits/stdc++.h>
using namespace std;

struct arr
{
    int val = 0;
};

main()
{
    int t,j,n,i,ntr,ndr,nts,nds,*tr,*ts,*dr,*ds,flag = 0;

    string *ans;

    cin>>t;

    ans = new string[t];

    j = 0;

    struct arr *tarr = new arr[101];
    struct arr *darr = new arr[101];

    while(t--)
    {
        flag = 0;

        for(i=1;i<101;i++)
        {
            tarr[i].val = 0;
            darr[i].val = 0;
        }

        cin>>ntr;

        tr = new int[ntr];

        for(i=0;i<ntr;i++)
        {
            cin>>tr[i];
            tarr[tr[i]].val = tarr[tr[i]].val + 1;
        }



        cin>>ndr;

        dr = new int[ndr];

        for(i=0;i<ndr;i++)
        {
            cin>>dr[i];
            darr[dr[i]].val = darr[dr[i]].val + 1;
        }



        cin>>nts;

        ts = new int[nts];

        for(i=0;i<nts;i++)
        {
            cin>>ts[i];
            tarr[ts[i]].val = tarr[ts[i]].val - 1;
        }



        cin>>nds;

        ds = new int[nds];

        for(i=0;i<nds;i++)
        {
            cin>>ds[i];
            darr[ds[i]].val = darr[ds[i]].val - 1;
        }



            for(i=1;i<101;i++)
            {
                if(tarr[i].val < 0)
                {
                    ans[j] = "no";
                    j++;
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {

                for(i=1;i<101;i++)
                {
                    if(darr[i].val < 0)
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

    for(i=0;i<j;i++)
    {
        cout<<ans[i]<<endl;
    }
}
