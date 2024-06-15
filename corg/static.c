// #include<stdio.h>
// int runner() {
//     int count = 0;
//     count++;
//     return count;
// }
//
// int main()
// {
//     printf("%d ", runner());
//     printf("%d ", runner());
//     return 0;
// }
//
//
//
#include<stdio.h>
int runner()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
/* define a local variable a */
int a = 1;

/* define a pointer variable, and point it to a using the & operator */
int * pointer_to_a = &a;

printf("The value a is %d\n", a);
printf("The value of a is also %d\n", *pointer_to_a);
    return 0;
}
