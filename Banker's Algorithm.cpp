#include<iostream>
using namespace std;

int nr,np;

int satisfy(int p, int** need, int* work) // returns 1 if it doesn't satisfy and 0 if it does
{
    int flag = 0,i;

    for(i=0;i<::nr;i++)
    {
        if(need[p][i] > work[i])
        {
            flag = 1;
            break;
        }
    }

    return flag;
}

main()
{
    int i,j,k,n=0,flag,nr,np;

    cout<<"Enter the number of processes:\n";
    cin>>np;

    cout<<"Enter the number of resources:\n";
    cin>>nr;

    ::nr = nr;
    ::np = np;

    int** allocated = new int*[np];
    int** maxi = new int*[np];
    int** need = new int*[np];

    int work[nr];
    int available[nr];
    int fin[np] = {0};
    int safe[np];

    for(i=0;i<np;i++)
    {
        allocated[i] = new int[nr];
        maxi[i] = new int[nr];
        need[i] = new int[nr];
    }


    cout<<"Enter the allocated resources (space-separated) for:\n";
    for(i=0;i<np;i++)
    {
        cout<<"Process "<<i+1<<endl;

        for(j=0;j<nr;j++)
        {
            cin>>allocated[i][j];
        }
    }

    cout<<"Enter the maximum resources requested (space-separated) for:\n";
    for(i=0;i<np;i++)
    {
        cout<<"Process "<<i+1<<endl;

        for(j=0;j<nr;j++)
        {
            cin>>maxi[i][j];
        }
    }

    cout<<"Enter the number of each resource available:\n";
    for(i=0;i<nr;i++)
    {
        cin>>available[i];
        work[i] = available[i];
    }

    cout<<"\nNeed matrix:\n";
    for(i=0;i<np;i++)
    {
        for(j=0;j<nr;j++)
        {
            need[i][j] = maxi[i][j] - allocated[i][j];
            cout<<need[i][j]<<" ";
        }
        cout<<endl;
    }

    while(n<=np)
    {
        flag = 0;

        for(i=0;i<np;i++) // goes through all processes
        {
            if(fin[i] == 0) // checks if not finished
            {
                if(satisfy(i,need,work) == 0) // can allocate
                {
                    for(j=0;j<nr;j++)
                    {
                        work[j] +=  allocated[i][j];
                    }

                    flag = 1;
                    fin[i] = 1;
                    safe[n] = i;
                    break;
                }
            }
        }

        if(flag == 0) // no satisfying process found
        {
            for(i=0;i<np;i++)
            {
                if(fin[i] == 0)
                {
                    cout<<"Deadlock state is reached\n";
                    return 0;
                }

                else if(fin[i] == 1 && i == np-1)
                {
                    cout<<"There is a safe sequence possible\n";

                    cout<<"Safe sequence is:\n";
                    for(i=0;i<np;i++)
                    {
                        cout<<safe[i]+1<<" ";
                    }

                    return 0;
                }
            }
        }

        n++;

    }

}
