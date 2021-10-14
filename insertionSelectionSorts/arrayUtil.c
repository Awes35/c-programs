#include <stdio.h>
#include "arrayUtil.h"

//author: Kollen Gruizenga
//defines the code to print int array, element by element.

void printArray(int arr[], int sz){

  printf("\n");
  printf("Elements: ");
  for(int a=0; a<sz; a++){
    printf(" %d", arr[a]);
  }

  /* printf("\n");
  printf("Elements: ");
  for(int b=0; b<sz; b++){
    printf(" %d", arr[b]);
  }*/

  printf("\n");
}
