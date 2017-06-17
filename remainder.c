#include <stdio.h>
#include <stdbool.h>

bool hasRemainder(int a, int b);

int main(int argc, char const *argv[]) {

  int num1, num2;

  printf("Give me two numbers to divide and I'll tell you if there's a remainder\n");
  printf("Please give me the number you want to divide: ");
  scanf("%d", &num1);
  printf("Now enter the number you want to divide that number by: ");
  scanf("%d", &num2);

  bool remain = hasRemainder(num1, num2);
  if(remain){
    printf("There is a remainder\n");
  }else{
    printf("There is no remainder\n");
  }
  return 0;
}

bool hasRemainder(int a, int b){
  bool remains;
  if (a%b != 0){
    remains = true;
  }else{
    remains = false;
  }

  return remains;
}
