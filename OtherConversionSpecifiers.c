#include <stdio.h>

int main(){
    int x, y;
    int *ptr = &x;

    printf("The val of the ptr is: %p\n", ptr);
    printf("The val of the addr of x is: %p\n", &x);
    
    printf("The total char is put on this line is: %n", &y);
    printf("%d\n\n", y);

    y = printf("This line has 28 characters\n");
    printf("%d characters were printed\n", y);

    printf("The %% is modulo operator\n");
}