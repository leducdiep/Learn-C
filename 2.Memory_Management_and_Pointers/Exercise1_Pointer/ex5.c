#include <stdio.h>

int findMax(int *arr, int size)
{   
    int max=-1;
    for(int i = 0;i < size;i++)
    {
        if(*(arr+i)>max){
            max = *(arr+i);
        }
    }
    return max;
}

int main()
{
    int arr[5] = {3,5,9,7,6};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Maximum value in the array: %d", findMax(arr,size));

    return 0;
}