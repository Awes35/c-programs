#include "sort.h"
#include "arrayUtil.h"

//author: Kollen Gruizenga
//main method code for insertionSort
int main(){
  int arrayTest[11] = {19, 18, 21, 42, -6, -9, 13, 10, 9, 7, 15};

  printf("Array before insertion sort:");
  printArray(arrayTest, 11);

  printf("\n");

  //do the insertion sort
  insertionSort(arrayTest, 11);

  printf("Array after insertion sort:");
  printArray(arrayTest, 11);

  printf("\n");
  return 0;
}
