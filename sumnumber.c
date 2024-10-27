#include <stdio.h>

int main()
{
  int num1, num2;
  printf("Give me the Number");
  scanf("%d",&num1);
  scanf("%d", &num2);
  int sum = num1 + num2;
  printf("Sum %d",sum);
  return 0;
}