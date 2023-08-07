#include <stdio.h>

int main() {
  float num1 = 0, num2 = 0;
  char operator = '+';

  printf("Enter operator either + or - or * or divide : ");
  scanf("%c", &operator);

  printf("Ennter two operands : ");
  scanf("%f %f", &num1, &num2);

  switch(operator) {
    case '+':
      printf("%g %c %g = %g\n", num1, operator, num2, num1 + num2);
      break;
    case '-':
      printf("%g %c %g = %g\n", num1, operator, num2, num1 - num2);
      break;
    case '*':
      printf("%g %c %g = %g\n", num1, operator, num2, num1 * num2);
      break;
    case '/':
      printf("%g %c %g = %g\n", num1, operator, num2, num1 / num2);
      break;
    default: 
      printf("You entered an unknown operator!!!");
  }
}