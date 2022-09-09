#include<stdio.h>
int main()
{
  int cp,sp,amt;
  printf("Enter the Cost Price:");
  scanf("%d", &cp);
  printf("Enter the Selling Price:");
  scanf("%d", &sp);
  if(sp>cp)
  {  
  float  amt =(sp-cp);
      printf("Profit= %f", amt);
  }
  else if(cp>sp)
  {  
  float  amt = (cp-sp);
    printf("Loss= %f", amt);
  }
  else
  {  
    printf("Neither Profit nor Loss");
  }
  return 0;
}