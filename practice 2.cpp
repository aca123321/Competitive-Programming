#include<iostream>
using namespace std;
 void swapa (int &, int &);
 void swapb(int *, int *);

 int main()
 {
 	int a = 10, b = 20;

 	swapa(a,b);
 	cout << a << " " << b;
 	return 0;
 }

 void swapa(int &x, int &y)
 {
 	swapb(&x,&y);
 }

 void swapb(int*c, int*d)
 {
     int s;
     s=*c;
     *c=*d;
     *d=s;
 }
