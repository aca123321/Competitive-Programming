#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,nf,i,j,k,l,npf=0,cur,ind=0;

    cout<<"Enter the number of pages in the reference string\n";
    cin>>n;

    cout<<"Enter the number of frames\n";
    cin>>nf;

    int pages[n];
    int frames[nf]= {0};
    int faultseq[n] = {0};
    int index[n];

    cout<<"Enter the page reference string\n";
    for(i=0;i<n;i++)
    {
        cin>>pages[i];
        index[i] = INT_MAX;
    }

    int flag = 0;
    int selected,maxi=INT_MIN;

    while(ind<n)
    {
        flag = 0;

        cur = pages[ind];

        for(j=0;j<nf;j++)
        {
            if(cur == frames[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag != 1) // page fault
        {
            if(npf < nf) // adding when remaining slots present
            {
                for(i=0;i<nf;i++)
                {
                    if(frames[i] == 0)
                    {
                        frames[i] = cur;

                        break;
                    }
                }
            }

            else // replacement
            {
                for(i=0;i<nf;i++)
                {
                    if(maxi>index[frames[i]])
                    {
                        maxi = index[frames[i]];
                        selected = i;
                    }
                }

                frames[selected] = cur; // Replaced
            }

            npf++;
            faultseq[npf-1] = cur;
        }

        ind++;
    }

    cout<<"Number of page faults = "<<npf<<endl;
    cout<<"Page fault sequence is:\n";
    for(i=0;i<n;i++)
    {
        if(faultseq[i] != 0)
        {
            cout<<faultseq[i]<<" ";
        }
    }
}
