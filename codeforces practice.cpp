#include<iostream>
using namespace std;

main()
{ int x, y;

cin>>x>>y;

((x%5==0)&&(y>=x))?(cout<<(double)y-x-0.50):(cout<<(double)y);
}
