#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int l=0,max=0;
  int *arr=malloc(n*sizeof(int));
  int *arr1=malloc((n*n)*sizeof(int));
  for(int i=0;i<n;i++)
  arr[i]=i+1;
  for(int i=0;i<n-1;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          arr1[l]=arr[i]&arr[j];
          l++;
      }
  }
    for(int i=0;i<l;i++)
  {
      if(arr1[i]>max && arr1[i]<k)
            max=arr1[i];
  }
  printf("%d\n",max);
  max=0,l=0;
  for(int i=0;i<n-1;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          arr1[l]=arr[i]|arr[j];
          l++;
      }
  }
    for(int i=0;i<l;i++)
  {
      if(arr1[i]>max && arr1[i]<k)
            max=arr1[i];
  }
  printf("%d\n",max);
  max=0,l=0;
  for(int i=0;i<n-1;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          arr1[l]=arr[i]^arr[j];
          l++;
      }
  }
    for(int i=0;i<l;i++)
  {
      if(arr1[i]>max && arr1[i]<k)
            max=arr1[i];
  }
  printf("%d",max);


}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}