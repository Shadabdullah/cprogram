#include <stdio.h>
int main()
{
float longitude;
float latitude ;
  char info[80];

puts("data=[");


   while ( scanf( "%f,%f, %79[^\n]",&latitude ,&longitude ,info)==3) {
  printf("{ longitude: %f,latitude : %f,info: %s }" , latitude,  longitude,info);

   }
  
  

puts("\n]");
return 0;
}
