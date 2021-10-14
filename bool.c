/* Program to demonstrate issues with boolean logic 0 and non-zero values in C
   Author: Kollen Gruizenga */

#include <stdio.h>

//determine a false positive.. since any non-zero condition is considered "true"
int main(){
  int sallyAge = 10; int tomAge = 11;//have 2 values to compare
  printf("Sally's age: %d. Tom's age: %d\n",sallyAge,tomAge);
  
  if (sallyAge = tomAge){//compare with = instead of ==, which triggers a false pos
    printf("True, Sally and Tom's ages are the same.\n");
  }
  else{
    printf("False.. the ages are not the same.\n");
  }

  return 0;
}
