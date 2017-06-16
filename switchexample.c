#include <stdio.h>

int main(int argc, char **argv){

  char grade = 'A';

  switch(grade){
    case 'A':
      printf("Excellent\n");
      break;

    case 'B':
      printf("OK.\n");
      break;

    default:
      printf("Invalid grade\n");
  }

  printf("Your grade is %c\n", grade );

  return 0;

}
