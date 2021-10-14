//Author: Kollen Gruizenga
//Program to define logic of two sorts.
#include "sort.h"
#include <stdio.h>

//selectionSort code
void selectionSort(int arr[], int sz){
int temp, i, j;

for(i=0; i<sz; i++){
  for(j=i+1; j<sz; j++){
    if (arr[i] > arr[j]){
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
  }
 }
}

//insertionSort code
void insertionSort(int arr[], int sz){
  int a, b, key;

  for(a=1; a<sz; a++){
    key = arr[a];
    b = a - 1;

    while (b >= 0 && arr[b] > key){
      arr[b+1] = arr[b];
      b = b - 1;
    }
    arr[b+1] = key;
  }
}
