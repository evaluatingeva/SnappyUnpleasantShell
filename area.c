#include <stdio.h>
int main()
{
  float len,wid,area,perimeter;
  printf("Enter length of the rectangle\n");
  scanf("%f",&len);
  printf("Enter width of the rectangle\n");
  scanf("%f",&wid);
  area = (len+wid);
  perimeter = 2*(len+wid);
  if (area>perimeter)
    printf("Yes, area(%0.2f) is not greater than its perimeter\n", area, perimeter);
  else
    printf("Area(%0.2f) is not greater than its perimeter (%0.2f)\n", area , perimeter);
  return 0;
      
}