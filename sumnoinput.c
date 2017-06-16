#include <stdio.h>

int add(int num1, int num2){
  int sum = num1 + num2;
  return sum;
}

int main(int argc, char **argv){
  printf("Result = %d\n", add(2,5));
  return 0;
}
