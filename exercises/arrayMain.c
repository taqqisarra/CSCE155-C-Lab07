#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "array_utils.h"

int main(int argc, char **argv) {


  //seed the random number generator with the current time
  srand(time(NULL));


  int n = 10;
  int *arr = generateRandomArray(n);
  printArray(arr, n);

  int sum = getSum(arr, n);
  printf("sum of elements = %d\n", sum);
  printArray(arr, n);

  free(arr);


int size;
printf("\nEnter Size of your array : ");
scanf("%d",&size);

int array[size];

printf("\nEnter elements of your array with wide spaces : ");

for(int i=0;i<size;i++){

scanf("%d",&array[i]);

}


//testing getmean(); function

printf("\nMean of given array is : %.2lf",getMean(array,size));

//testing getmean(); function

printf("\n\nMinimum element of array is : %d",getMin(array,size));

//testing getIndexOfMin(); function

printf("\n\nIndex of minimum element of given array is : %d",getIndexOfMin(array,size));

//testing getMax(); function

printf("\n\nMaximum element of array is : %d",getMax(array,size));

//testing getIndexOfMax(); function

printf("\n\nIndex of maximum element of given array is : %d",getIndexOfMax(array,size));


//testing fiterThreshold(); function

int threshold;

printf("\n\nEnter Value for threshold : ");
scanf("%d",&threshold);

int res_size;

int *ptr = filterThreshold(array , size , threshold , &res_size); 

printf("\nResult size is %d and elements greator or equal than %d are : ",res_size,threshold);

for(int i=0;i<res_size;i++){

printf("%d ",ptr[i]);

}

  return 0;

}
