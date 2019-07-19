#include<stdio.h>

int partition(int* arr, int s, int e)
{
    int pivot = arr[e],temp,i=0,j=-1;

    for(i=0;i<e;i++)
    {
        if(arr[i]<=pivot)
        {
            j++;
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }

    j++;

    temp = arr[j];
    arr[j] = arr[e];
    arr[e] = temp;

    return j;
}

void quicksort(int* arr, int s, int e)
{
    int p;

    if(s<e)
    {
        p = partition(arr,s,e);
        quicksort(arr,s,p-1);
        quicksort(arr,p+1,e);
    }
}

main()
{
    int i,n,*arr;

    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);

    arr = (int*)malloc(n*(sizeof(int)));

    printf("Enter the space separated elements\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }

    quicksort(arr,0,n-1);

    printf("The sorted array is:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
