#include "sort.h"
#include "arrayUtil.h"

//Author: Kollen Gruizenga
//the main method code for Selection Sort
int main(){
  int arrayTest[10] = {12, 9, -2, 20, 14, 8, 0, 99, 74, 17};
  
  /*printf("\n");
  printf("Elements before selection sort: ");
  for(int k=0; k<10; k++){
    printf(" %d", arrayTest[k]);
  }*/
  printf("Array before selection sort:");
  printArray(arrayTest, 10);

  printf("\n");

  //do the sorting (call sort.h)
  selectionSort(arrayTest, 10);

  /*printf("\n");
  printf("Elements after selection sort: ");
  for(int j=0; j<10; j++){
    printf(" %d", arrayTest[j]);
  }*/
  printf("Array after selection sort:");
  printArray(arrayTest, 10);
  
  printf("\n");
  return 0;
}
