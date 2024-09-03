#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *file = fopen("file.txt", "r");
if (file == NULL) {
    perror("Error opening file");
    return 1;
}

fseek(file, 0, SEEK_END);  // Move to the end of the file
long file_size = ftell(file);  // Get the size of the file
rewind(file);  // Move back to the beginning

printf("File size: %ld bytes\n", file_size);

fclose(file);

return 0; 
}
