#include<bits/stdc++.h>
using namespace std;

#define lli long long int

class C
{
    int a;

public:
    C(int b)
    {
        this->a = b;
    }
    get()
    {
        return this->a;
    }
};

void passByValue(int x)
{
    x = 43;
}

void passByReference(int* y)
{
    *y = 43;
}

main()
{
    int a = 1;

    passByValue(a);
    cout<<a<<endl;
    passByReference(&a);
    cout<<a<<endl;
}
