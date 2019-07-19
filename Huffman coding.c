#include<stdio.h>

struct minheapnode
{
    char data;
    int freq;
    struct minheapnode *left, *right;
};

struct minheap
{
    int size, capacity;
    struct minheapnode** array;
};

struct minheapnode* newnode(char val, int fr)
{
    struct minheapnode* temp = (struct minheapnode*)malloc(sizeof(struct minheapnode));

    temp->data = val;
    temp->freq = fr;

    return temp;
}


struct minheap* createminheap(int cap)
{
    struct minheap *temp = (struct minheap*)malloc(sizeof(struct minheap));

    temp->capacity = cap;
    temp->size = 0;

    temp->array = (struct minheapnode**)malloc((temp->capacity)*sizeof(struct minheapnode*));

    return temp;
}


void swapminheapnode(struct minheapnode *a, struct minheapnode *b)
{
    struct minheapnode* temp;

    temp->data = a->data;
    temp->freq = a->freq;
    temp->left = a->left;
    temp->right = a->right;

    a->data = b->data;
    a->freq = b->freq;
    a->left = b->left;
    a->right = b->right;

    b->data = temp->data;
    b->freq = temp->freq;
    b->left = temp->left;
    b->right = temp->right;

}


void minheapify(struct minheap* mh, int idx)
{
    int smallest = idx;
    int left = 2*idx + 1;
    int right = 2*idx + 2;

    if(left < mh->size && mh->array[left]->freq < mh->array[smallest]->freq)
    {
        smallest  = left;
    }

    if(right < mh->size && mh->array[right]->freq < mh->array[smallest]->freq)
    {
        smallest = right;
    }

    if(smallest != idx)
    {
        swapminheapnode(&mh->array[smallest], &mh->array[idx]);
        minheapify(mh,smallest);
    }
}


int issizeone(struct minheap *mh)
{
    if(mh->size == 1)
    {
        return 1;
    }
}


struct minheapnode* extractmin(struct minheap* mh)
{
    struct minheapnode* temp = mh->array[0];

    mh->array[0] = mh->array[mh->size-1];

    mh->size = mh->size - 1;

    minheapify(mh,0);

    return temp;

}


void insertminheap(struct minheap* mh, struct minheapnode* mhnode)
{
    int i = mh->size  - 1;

    mh->size = mh->size + 1;

    while(i != 0 && mhnode->freq < mh->array[(i-1)/2]->freq)
    {
        mh->array[i] = mh->array[(i-1)/2];
        i = (i-1)/2;
    }

    mh->array[i] = mhnode;
}


void buildminheap(struct minheap* mh)
{
    int n = mh->size - 1;
    int i;

    for(i=(n-1)/2;i>=0;i--)
    {
        minheapify(mh,i);
    }
}

void printarr(int arr[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
}


int isleaf(struct minheapnode* root)
{
    return (!(root->left) && !(root->right));
}

struct minheap* createandbuildminheap(char data[], int freq[], int size)
{
    int i;

    struct minheap* mh = createminheap(size);

    for(i=0;i<size;i++)
    {
        mh->array[i] = newnode(data[i],freq[i]);
    }

    mh->size = size;

    buildminheap(mh);

    return mh;
}


struct minheapnode* buildhuffmantree(char data[], int freq[], int size)
{
    struct minheapnode *left, *right, *top;

    struct minheap *mh = createandbuildminheap(data, freq, size);

    while(issizeone(mh) !=  1)
    {
        left = extractmin(mh);
        right = extractmin(mh);

        top = newnode('$',left->freq + right->freq);

        top->left = left;
        top->right = right;

        insertminheap(mh,top);
    }

    return extractmin(mh);
}


void printcodes(struct minheapnode* root, int arr[],int top)
{
    if(root->left)
    {
        arr[top] = 0;
        printcodes(root->left, arr , top+1);
    }

    if(root->right)
    {
        arr[top] = 1;
        printcodes(root->right, arr, top+1);
    }

    if(isleaf(root))
    {
        printf("%c: ",root->data);
        printarr(arr, top);
    }
}

void huffmancodes(char data[], int freq[], int size)
{
    struct minheapnode* root = buildhuffmantree(data,freq,size);

    int arr[100], top = 0;

    printcodes(root,arr, top);
}


int main()
{
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };

    int size = sizeof(arr) / sizeof(arr[0]);

    huffmancodes(arr, freq, size);

    return 0;
}
