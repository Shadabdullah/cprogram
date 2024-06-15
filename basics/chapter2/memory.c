

void  go_south_east( int *longitude ,  int *latitude)

 { *longitude -= 1 ; *latitude +=1; }


#include <stdio.h>

int ship(int argc, char *argv[]) {
    int longitude = 23;
    int latitude = 67;


   go_south_east(&longitude,  &latitude);


    printf("New location: longitude = %d, latitude = %d\n", longitude, latitude);

    return 0;
}


#include <stdio.h>

int main() {
    char *ptr = "Hello wordl"; // Example pointer to a string literal
    unsigned long decimal_address = (unsigned long)ptr; // Typecasting pointer to unsigned long
    printf("Memory address in decimal: %lu\n", decimal_address);
    return 0;
}
