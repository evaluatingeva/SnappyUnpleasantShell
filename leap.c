#include <stdio.h>
int main()
{
  int year;
  printf("Enter a year:");
  scanf("%d", &year);
  for (y=year);
  if ((y%4==0)&&(y%400==0)||(y%100!==0))
    printf("%d\n",y);
  return 0;
  
}