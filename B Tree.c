#include<stdio.h>

struct btnode
{
    int n; //number of keys in the node
    int* keys; // the keys themselves in ascending order
    bool leaf; // true if a leaf, false if not
    struct btnode **child;
};

main()
{

}
