#include <stdio.h>
#include <stdbool.h>
bool check(int arr[],int size) { 
  int c=0,avg1=0;
  if(size>=3) {
    for(int i=0; i<size; i++)
      avg1+=arr[i];

int avg = avg1/3;
int sum1=0;
for(int i=0; i<size; i++)
{
  sum1+=arr[i];
  if(sum1==avg) {
    c++;
    sum1=0;
}
}

if(avg1%3!=0)
return false;

if(c>=3) {
return true;
}
}
return false;
}
int main()
{
int arr[] = {18,12,-18,18,-19,-1,10,10};
int size = sizeof(arr) / sizeof(arr[0]);
printf("%s",check(arr,size)?"true":"false");

return 0;
}
