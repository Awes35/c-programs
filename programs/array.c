/* Program illustrates lack of bound checks on C arrays.
   Author: Kollen Gruizenga */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int a[10];//declare an array

  //random int value generator
  int r = rand() % 100;//value will be random int between 0-99
  

  //initialize array elements to different values
  for(int i=0; i<sizeof(a); i++){
    a[i] = i*(32);
  }

  //using a loop which allows for index to go 2x array's size (there is no bound check)
  for (int i=0; i<(2*sizeof(a)); i++){
    if (a[i] != ""){
      printf("%d\n",a[i]);
      if (i == 9) printf("That was 10 values.. the full length of the array!\n");
    }
  }

  return 0;
}
