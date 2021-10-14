/* Program to illustrate the difference of prefix and postfix decrementing.
   Author: Kollen Gruizenga */

#include <stdio.h>

int main(){
  printf("I will be using two variables, A and B, both integers to demonstrate pre and post decrementing.\n\n");
  int A=1; int B=0;

  printf("A value is %d, B value is %d.\n",A,B);
  B = A++ * 10;
  printf("Now, setting B to (A++ * 10) yields: %d\n",B);
  printf("A value is %d, B value is %d.\n",A,B);

  A = 1; B = 0;
  printf("\nNow let's start over and try the other way.\n");
  printf("A value is %d, B value is %d.\n",A,B);
  B = ++A * 10;
  printf("Setting B to (++A * 10) yields: %d\n",B);

  return  0;
}
