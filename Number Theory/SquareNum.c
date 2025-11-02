#include<stdio.h>
#include<math.h>

int isSquare(long long n){
    int squareRoot = sqrt(n);
    if (n == (long long)squareRoot * squareRoot)
    return 1;
    return 0;
}

int main(){
    int n; scanf("%d", &n);
    if(isSquare(n)) printf("n is a Square number\n");
    else printf("Not a square number\n");

    return 0;
}