#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,j,k,nf,flag,npf=0,mini,ptr=0,flagmini;

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

    if(nf>=n)
    {
        cout<<"Number of page faults = "<<n<<endl;
        cout<<"Page fault sequence:\n";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
    }

    npf = 0;
    ptr = 0;
    i = 0;

    while(npf < nf)
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

    for(i=nf;i<n;i++)
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
            mini = INT_MIN;

            for(j=0;j<nf;j++) // j traversing frames
            {
                for(k=i-1;k>=0;k--) // k traversing page reference string
                {
                    if(frames[j] == arr[k] || k == 0)
                    {
                        if(k > mini)
                        {
                            mini = k;
                            ptr = j;
                            break;
                        }
                    }
                }
            }

            npf++;
            frames[ptr] = arr[i];
            faultseq[npf-1] = arr[i];
        }
    }

    cout<<"Number of faults = "<<npf<<endl;
    cout<<"Page fault sequence:\n";
    for(i=0;i<npf;i++)
    {
        cout<<faultseq[i]<<" ";
    }
}
