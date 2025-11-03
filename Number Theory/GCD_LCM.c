// Greatest common divisor 
// Least common multiple 
#include<stdio.h>
#include<math.h>

// easies way: O(n)
// int gcd(int a, int b){
//     if(a == 0 || b == 0){
//         return a + b;
//     }
//     for(int i = fmin(a, b);i >= 1;i--){
//         if(a % i == 0 && b % i == 0){
//             return i;
//         }
//     }
//     return 0;
// }

//Euclid angorithm O(logN)
int gcd(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;    
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}
int main(){
    int a, b; scanf("%d %d", &a, &b);
    printf("The GCD: %d\n", gcd(a, b));
    printf("The LCM: %d\n", lcm(a, b));
    return 0;
}