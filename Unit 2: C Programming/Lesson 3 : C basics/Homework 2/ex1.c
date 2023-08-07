#include <stdio.h>

int main() {
  int number;
  printf("Enter an integer you want to check: ");
  scanf("%d", &number);

  if (number & 1)
    printf("%d is odd\n", number);
  else
    printf("%d is even\n", number);
}