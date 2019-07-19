#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,j,nf,flag,npf=0,ptr=0,maxi,k;

    cout<<"Enter the number of frames\n";
    cin>>nf;

    int frames[nf]={0};

    cout<<"Enter the number of page requests\n";
    cin>>n;
    int faultseq[n] = {0};

    int arr[n];

    cout<<"Enter the page reference string separated by space\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    i = 0;
    while(npf<nf)
    {
        flag = 0;

        for(j=0;j<nf;j++)
        {
            if(frames[j] == arr[i])
            {
                flag = 1;
                break;
            }
        }

        if(flag != 1)
        {
            npf++;
            frames[npf-1] = arr[i];
            faultseq[npf-1] = arr[i];
        }
        i++;
    }

    while(i<n)
    {
        flag = 0;

        for(j=0;j<nf;j++)
        {
            if(frames[j] == arr[i])
            {
                flag = 1;
            }
        }

        if(flag != 1)
        {
            maxi = INT_MIN;
            npf++;

            for(j=0;j<nf;j++)
            {
                for(k=i+1;k<n;k++)
                {
                    if(frames[j] == arr[k] || k == n-1)
                    {
                        if(k > maxi)
                        {
                            maxi = k;
                            ptr = j;
                            break;
                        }
                    }
                }
            }

            frames[ptr] = arr[i];
            faultseq[npf-1] = arr[i];
         }
         i++;
    }

    cout<<"Number of faults = "<<npf<<endl;
    cout<<"Page fault sequence:\n";
    for(i=0;i<npf;i++)
    {
        cout<<faultseq[i]<<" ";
    }
}
