#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    return (*(int *)a - *(int *)b);
}

int ksum(int arr[],int k,int len){
    qsort(arr,len,sizeof(int),compare);
   
    for(int i=0;i<len && k>0;i++){
        if(arr[i]<0){
            arr[i] = -arr[i];
            k--;
        }
    }
   
    if(k%2 == 1)
    arr[0]=-arr[0];
   
    int sum=0;
    for(int i=0;i<len;i++)
    sum+=arr[i];
   
    printf("%d",sum);
    printf("\n");
}

int main(){
    int arr1[] = {2,-3,-1,5,-4};
    int k1 = 2;
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    ksum(arr1,k1,size1);
   
    int arr2[] = {4,2,3};
    int k2 = 1;
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    ksum(arr2,k2,size2);
   
    int arr3[] = {3,-1,0,2};
    int k3 = 3;
    int size3 = sizeof(arr3)/sizeof(arr3[0]);
    ksum(arr3,k3,size3);
   
    return 0;
}
