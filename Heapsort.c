#include<stdio.h>

int size;

void maxheapify(int* arr, int i)
{
    int l = (2*i)+1, r = (2*i)+2, temp, largest = i;

    if((l<size)&&(arr[l]>arr[largest]))
    {
        largest = l;
    }

    if((r<size)&&(arr[r]>arr[largest]))
    {
        largest = r;
    }

    if(largest != i)
    {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        maxheapify(arr,largest);
    }
}

void buildmaxheap(int* arr)
{
    int i;

    for(i=(size-1)/2;i>=0;i--)
    {
        maxheapify(arr,i);
    }
}

void heapsort(int* arr)
{
    int i,temp;

    buildmaxheap(arr);

    for(i=(size-1);i>=0;i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        size--;

        maxheapify(arr,0);
    }
}

main()
{
    int i,n,*arr;

    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);

    size = n;

    arr = (int*)malloc(n*(sizeof(int)));

    printf("Enter the space separated elements\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }

    heapsort(arr);

    printf("The sorted array is:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
