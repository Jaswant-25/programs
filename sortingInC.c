#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    return (*(char *)a - *(char *)b);
}

int main()
{
    int arr[] = {'a','q','y','b','s'};
    int size = sizeof(arr)/sizeof(arr[0]);
   
    qsort(arr,size,sizeof(char),compare);
   
    for(int i=0;i<size;i++){
        printf("%c",arr[i]);
        printf(" ");
    }
   
    return 0;
}
