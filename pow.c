#include <stdio.h>

float pow(float x, unsigned int exp){
  /* base case*/
  if (exp == 0){
    return 1.0;
  }

  /* "recursive" case */
  return x * pow(x, exp - 1);
}

int main(int argc, char **argv){
  float p;
  p = pow(5, 1);
  printf(" p = %f\n", p);
  return 0;
}
