#include<iostream>
#include<string>
using namespace std;
void step2and3(int, int, int, int, string, string);
void step4(int, int, int, int, string, string);
void step5(int, int, int, int, string, string);
void step6(int, int, int, int, string, string);

int main()
{
    int a,b,i,j;
    string A, B;

    i = j = 1;

    cin>>A>>B;
    a = A.length();
    b = B.length();


    step2and3(i,j,a,b,A,B);
    return 0;

}

void step2and3(int i, int j, int a, int b, string A, string B)
{
    int c;
    c = 0;

    cout<<endl<<i<<endl<<j;
    if(i>a)
    {
        cout<<endl<<"TRUE";
        c++;
    }

    else if(j>b)
    {
        cout<<endl<<"FALSE";
        c++;
    }

    if(c == 0)
    {
        step4(i, j, a, b, A, B);
        step5(i, j, a, b, A, B);
        step6(i, j, a, b, A, B);
    }

}

void step4(int i, int j, int a, int b, string A, string B)
{
    if(A[i-1] == B[i-1])
    {
        i++;
        j++;
        step2and3(i,j,a,b,A,B);
    }

    else
    {
        step5(i, j, a, b, A, B);
    }
}

void step5(int i, int j, int a, int b, string A, string B)
{
    if(i == 1)
    {
        j++;
        step2and3(i,j,a,b,A,B);
    }
    else
    {
        step6(i, j, a, b, A, B);
    }
}

void step6(int i, int j, int a, int b, string A, string B)
{
    i = 1;
    step2and3(i,j,a,b,A,B);
}





