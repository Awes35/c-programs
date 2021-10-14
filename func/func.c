/* Program which shows the pass-by-value nature of C 
   Author: Kollen Gruizenga */

#include <stdio.h>


int main(){
  //creating an array and then passing it to a method to remove an element in index 0 to demonstrate
  int sampleArray[] = {1,5,7,9,9,13,17};
  printf("Printing array before calling remove\n");
  display(sampleArray);
  removeOne(sampleArray, 0);
  printf("\nArray after calling to remove one (it's the same)\n");
  display(sampleArray);

  return 0;
}

//removes element at specified index (sets it to 0)
void removeOne(int arr[], int index){
  arr[index] = 0;
}

//displays all the values in array
void display(int arr[]){
  for (int i=0; i<sizeof(arr); i++){
    printf("%d\n",arr[i]);
  }

}
