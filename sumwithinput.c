#include <stdio.h>

int add(int num1, int num2){
  int sum = num1 + num2;
  return sum;
}
int main(int argc, char **argv){

  int a, b;

  printf("Please input the first integer number you want to add: ");
  scanf("%d", &a);

  printf("Please input the second integer number you want to add: ");
  scanf("%d", &b);

  printf("Result %d\n", add(a,b));

  return 0;
}
