#include <stdio.h>

int main()
{
  int n = 0;
  printf("Enter an integer: ");
  scanf("%d", &n);

  if (n < 0)
    printf("Error!!! Factorial of negative numbers doesn't exist.\n");
  else if (n == 0)
    printf("Factorial = 1\n");
  else
  {
    int factorial = 1;
    for (int i = 2; i <= n; factorial *= i++);
    printf("Factorial = %d\n", factorial);
  }
}