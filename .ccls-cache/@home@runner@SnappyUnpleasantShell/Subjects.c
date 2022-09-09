#include <stdio.h>
int main()
{
  int maths, phy, chem, eng, cs;
  printf("Enter the marks scored in maths\n");
  scanf("%d", &maths);
  printf("Enter the marks scored in phy\n");
  scanf("%d", &phy);
  printf("Enter the marks scored in chem\n");
  scanf("%d", &chem);
  printf("Enter the marks scored in eng\n");
  scanf("%d", &eng);
  printf("Enter the marks scored in cs\n");
  scanf("%d", &cs);
  int total=((maths+phy+chem+eng+cs)/5);
  if(total>60)
    printf("you have scored %d and recieved first division",total);
  if (total>50 && total<60)
    printf("you have scored %d second division", total);
  if (total>40 && total<50)
    printf("you have scored %d third division",total);
  if (total<40)
    printf("You have scored %d and failed", total);
  return 0;
  }