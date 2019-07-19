#include<iostream>
using namespace std;

int** mat(int** , int);
int query(int, int, int);

main()
{
    int n,i,**arr = 0,j;

    cin>>n;

    arr = new int*[n];

    for(i=0;i<n;i++)
    {
        arr[i] = new int[n];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j] = 0;
        }
    }

    arr = mat(arr,n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<endl;
        }
    }

}


int** mat(int** arr, int n)
{
    int q;

    while()
}

int query(int n, int r1, int c1)
{
    string ans;

    cout<<"? "<<r1<<" "<<c1<<" "<<n<<" "<<n<<endl;
    cout.flush();

    cin>>ans;
    if(ans = "YES")
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
