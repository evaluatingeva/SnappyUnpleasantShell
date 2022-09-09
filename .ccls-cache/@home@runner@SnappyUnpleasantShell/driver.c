#include<stdio.h>
int main()
{
  char sex, ms;
  int age;
  printf("Enter your sex, ms, age");
  scanf("%c %c %d", &sex,&ms,&age);
  if(ms == 'M')
    printf("The driver should be insured");
  else 
  {  
    if (sex == 'm')
    printf("The driver should be insured");
  }
  return 0;
}