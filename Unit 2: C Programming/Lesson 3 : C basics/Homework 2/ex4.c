#include <stdio.h>

int main() {
  float number = 0.0;
  printf("Enter a number: ");
  scanf("%f", &number);
  if(number > 0.0) {
    printf("%g is positive.\n", number);
  } else if(number < 0.0) {
    printf("%g is negative.\n", number);
  } else {
    printf("You entered zero.\n");
  }
}