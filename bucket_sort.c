#include<stdio.h>

struct node
{
    struct node *next, *pre;
    int data;
};

struct node* newnode(int );
int* bucket_sort(int*, int);
void insert(struct node* , int);

main()
{
    int i,n,*arr;
    arr = (int*)malloc(sizeof(int));

    printf("Enter the number of elements you'd want to sort\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",(arr + i));
    }

    arr = bucket_sort(arr, n);

    printf("The sorted array is:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr + i));
    }
}

int* bucket_sort(int* arr, int n)
{
    struct node **buck,*temp;
    int i,max,min,j,size;

    buck = (struct node**)malloc(n*(sizeof(struct node*)));

    max = min = *arr;

    for(i=1;i<n;i++)
    {
        if(*(arr + i) > max)
        {
            max = *(arr + i);
        }

        if(*(arr + i) < min)
        {
            min = *(arr + i);
        }

        *(buck + i) = NULL;
    }

    size = (max - min + 1)/n;

    for(i=0;i<n;i++)
    {
        j = ((*(arr + i)) - min)/(size);

        insert(*(buck + j),*(arr + i));
    }

    j = 0;

    for(i=0;i<n;i++)
    {
        if(*(buck + i) != NULL)
        {
            temp = *(buck + i);

            while(temp->next != NULL)
            {
                *(arr + j) = temp->data;
                j++;
                temp = temp->next;
            }

            *(arr+j) = temp->data;
            j++;
        }
    }

    return arr;
}


void insert(struct node*buck, int val)
{
    struct node *temp, *ins;
    temp = (buck);

    ins = newnode(val);

    if((buck) == NULL)
    {
        (buck) = ins;
        ins->pre = (buck);
    }

    else
    {
        if(temp->next == NULL)
        {
            if(temp->data > val)
            {
                (buck) = ins;
                ins->pre = (buck);
                ins->next = temp;
            }
        }

        else
        {
            while( ( (temp->next)->data < val ) && ( temp->next != NULL ) )
            {
                temp = temp->next;
            }

            ins->next = temp->next;
            ins->pre = temp;
            if(ins->next != NULL)
            {
                (ins->next)->pre = ins;
            }
            temp->next = ins;
        }
    }
}


struct node* newnode(int val)
{
    struct node* temp;

    temp = (struct node*)malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;
    temp->pre = NULL;

    return temp;
};

