/* Loop through the entire alphabet 
Author: Kollen Gruizenga */

#include <stdio.h>

int main(){
  char letter = 'A';//the letter we start with

  //loop for the entire length of alphabet, each time increasing the letter to the next and printing
  for(int i=0; i<26; i++){
    printf("The letter is: %c\n", letter);
    letter++;
  }
  return 0;
}
  
