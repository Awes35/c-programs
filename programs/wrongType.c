/* Program to illustrate what happens when printing a float with integer format, and 
an integer with float format.
Author: Kollen Gruizenga */

#include <stdio.h>

//i use the %d as the integer placeholder for float 20.2, and %g for the float placeholder for integer 17.
int main(){
  printf("Demonstrating formatting between integer and floats.\n");
  printf("A float printed with integer format: %d\n", 20.2);
  printf("An integer printed with float format: %g\n",17);

  return 0;
}
