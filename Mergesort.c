#include<stdio.h>

void merge(int* arr, int s, int e)
{
    int mid = (s+e)/2, *temp, n = (e-s+1),i = s,j = mid+1, k = 0;

    temp = (int*)malloc(n*(sizeof(int)));

    while((i<=mid)&&(j<=e))
    {
        if(arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }

        else
        {
            temp[k++] = arr[j++];
        }
    }

    while(i<=mid)
    {
        temp[k++] = arr[i++];
    }

    while(j<=e)
    {
        temp[k++] = arr[j++];
    }

    for(i=s;i<=e;i++)
    {
        arr[i] = temp[i-s];
    }
}


void mergesort(int* arr, int s, int e)
{
    int mid = (s+e)/2;

    if(s>=e)
    {
        return arr;
    }

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge(arr,s,e);
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

    mergesort(arr,0,n-1);

    printf("The sorted array is:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
