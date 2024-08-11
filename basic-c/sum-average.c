#include <stdio.h>
#include <conio.h>

int main()
{
  float num1, num2, num3, sum, avg;

  printf("Enter the three numbers: ");
  scanf("%f %f %f", &num1, &num2, &num3);

  sum = num1 + num2 + num3;
  avg = sum / 3;

  printf("Total: %.2f\n", sum);
  printf("The average of the three numbers is: %.2f\n", avg);

  return 0;
}
