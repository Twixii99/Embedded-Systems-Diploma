#include <stdio.h>

int main()
{
  float a = 0.0, b = 0.0;

  // reading data
  printf("Enter value of a: ");
  scanf("%f", &a);

  printf("Enter value of b: ");
  scanf("%f", &b);

  // swapping algo
  float c = a;
  a = b;
  b = c;

  // print result
  printf("After swapping, value of a = %f\n", a);
  printf("After swapping, value of b = %f\n", b);
}