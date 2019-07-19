#include<stdio.h>

void insertionsort(int* arr, int n)
{
    int i,temp,beg,j;

    for(i=1;i<n;i++)
    {
        beg = arr[i];
        j = i-1;

        while((j>=0)&&(arr[j]>beg))
        {
            arr[j+1] = arr[j];
            j--;
        }

        j++;
        arr[j] = beg;
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

    insertionsort(arr,n);

    printf("The sorted array is:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
