#include <stdio.h>

unsigned int factori( unsigned int y){

if(y==1){
    return 1 ;
  }


  return y*factori( y-1) ;


}


int main(int argc, char *argv[])
{

  printf("  5 factorial is %d \n",factori(5));
  return 0;
}
