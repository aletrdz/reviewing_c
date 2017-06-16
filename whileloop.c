#include <stdio.h>

int main(int argc, char const *argv[]) {

  char c = '\0';

  while((c != 'y') && (c != 'n')){
    printf("Enter y or n: ");
    c = getchar();
    getchar();
  }
  return 0;
}
