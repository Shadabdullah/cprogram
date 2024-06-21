#include <stdio.h>
int main(int argc, char *argv[])
{
  int number ;

  puts("Program has started");

  while (scanf("%d",&number)==1 ) {
    if(number%2==0){

    printf("%d\n", number);
    }
  
  }

  puts("Program has ended");

  return 0;
}
