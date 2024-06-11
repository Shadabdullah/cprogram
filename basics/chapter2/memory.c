

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
    char s[] = "How big is it?";
    char *t = s;

    printf("%c\n", *t);

    return 0;
}
