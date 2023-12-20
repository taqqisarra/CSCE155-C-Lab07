#include <stdlib.h>
#include <stdio.h>

#include "array_utils.h"

void printArray(const int *arr, int n) {
  if(arr == NULL) {
    printf("[null]\n");
    return;
  }
  printf("[ ");
  for(int i=0; i<n-1; i++) {
    printf("%d, ", arr[i]);
  }
  printf("%d ]\n", arr[n-1]);
  return;
}

void printTable(int **table, int n, int m) {
  if(table == NULL) {
    printf("[null]\n");
    return;
  }
  for(int i=0; i<n; i++) {
    printArray(table[i], m);
  }
  return;
}

int * generateRandomArray(int size) {
  if(size < 0) {
    return NULL;
  }
  int* randomArr = (int*) malloc(4*size);
  for(int i=0; i<size; i++) {
    randomArr[i] = rand() % 100;
  }
  return randomArr;
}

int getSum(int *arr, int size) {
  if(arr == NULL) {
    return 0;
  }
  int total = 0;
  for(int i=0; i<size; i++) {
    total += arr[i];
    
  }
  return total;
}

void freeTable(int **table, int n) {
  if(table == NULL) {
    return;
  }
  for(int i=0; i<n; i++) {
    free(table[i]);
  }
  free(table);
}

// defination of  getMean(); function;

double getMean(const int *arr, int size) {

double avg;

int sum=0;

  for(int i=0;i<size;i++){

sum=sum+ *arr;
arr++;

  }

avg = sum/size;

  return avg;

}

//defination of getmin(); function

int getMin(const int *arr, int size) {
  
int min=arr[0];

for(int i=1;i<size;i++){

if(arr[i]<min){

min=arr[i];

  
}

}

return min;

}

//defination of getindexofMin(); function

int getIndexOfMin(const int *arr, int size) {

int min=arr[0];

for(int i=1;i<size;i++){

if(arr[i]<min){

min=arr[i];
 
}

}

for(int i=0;i<size;i++){

if(min==arr[i]){

return i;

}


}
 
}

//defination of getMax(); function


int getMax(const int *arr, int size) {

int max=arr[0];

for(int i=1;i<size;i++){

if (max<arr[i]){

max=arr[i];
  
}

}

return max;

}

//defination of getindexofMax(); function


int getIndexOfMax(const int *arr, int size) {

 int max=arr[0];

for(int i=1;i<size;i++){

if (max<arr[i]){

max=arr[i];
  
}
}

for(int i=0;i<size;i++){

if(max==arr[i]){

return i;

}

} 

}


//defination of fiterThreshold(); function

int * filterThreshold(const int *arr, int size, int threshold, int *resultSize) {

int count=0;

for(int i=0;i<size;i++){

if(arr[i] >= threshold){

count++;

}
}
int *dyn_arr = (int*) malloc(4*count); 

*resultSize = count;

int index=0;

if(dyn_arr==NULL){

  printf("\nMemory Allocation Error\n");
  exit(1);

}

for (int i = 0; i < size; i++)
{
  if(arr[i] >= threshold) {

dyn_arr[index]=arr[i];

index++;

  }

}
return dyn_arr;  
}

int **createMultiplicationTable(int n, int m) {
  //TODO: implement
}
