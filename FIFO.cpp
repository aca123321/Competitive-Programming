#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,j,nf,flag,npf=0,ptr=0;

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

    for(i=0;i<n;i++)
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
            npf++;
            frames[ptr] = arr[i];
            faultseq[npf-1] = arr[i];
            ptr++;
            ptr = ptr%nf;
        }
    }

    cout<<"Number of faults = "<<npf<<endl;
    cout<<"Page fault sequence:\n";
    for(i=0;i<npf;i++)
    {
        cout<<faultseq[i]<<" ";
    }
}
