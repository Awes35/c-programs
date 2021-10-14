/* Program to display the necessary storage amount in bytes for various types of variables
   Author: Kollen Gruizenga */

//Analysis: Upon running, all of the values are the same as Table2 except the long is 8, rather than the "4 or 8" in the book.

#include <stdio.h>

//print the number of bytes required in storage for each type using sizeof().
int main(){
    
  //i am using %lu because the type is an unsigned long.
  printf("The number of bytes in %s is %lu\n","char",sizeof(char));
  printf("The number of bytes in %s is %lu\n","short",sizeof(short));
  printf("The number of bytes in %s is %lu\n","int",sizeof(int));
  printf("The number of bytes in %s is %lu\n","long",sizeof(long));
  printf("The number of bytes in %s is %lu\n","long long",sizeof(long long));
  printf("The number of bytes in %s is %lu\n","float",sizeof(float));
  printf("The number of bytes in %s is %lu\n","double",sizeof(double));

  return 0;
}
