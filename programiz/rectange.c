#include "stdio.h"

 int main()
{
  int lenght;
  int width ;
  printf("Enter lenght in int : ");
  scanf("%d",&lenght);
  printf("Enter width in int : ");
  scanf("%d",&width);
  int Area = lenght*width;
  printf("You Entered %d :", Area);
  return 0 ;
}
