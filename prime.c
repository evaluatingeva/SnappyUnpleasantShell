#include <stdio.h>
int main()
{
  int n;
  printf("Enter the number ");
  scanf("%d", n);
  if((n==2)||(n==3)||((n-1)%6==0)||((n+1)%6==0))
  {
   printf("Number is Prime ");  
  }  
  else 
  {
 printf("Number is not prime ");    
  }
  return 0;
}