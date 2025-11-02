#include<stdio.h>
#include<math.h>
// 40 = 2^3 * 5^1 --> 2 2 2 5 
// using the trial divisor : thu va chia 
// 40 % 2 == 0 --> 2 20 % 2 == 0 --> 2 10 % 2 == 0 --> 2 5 % 2 == 1 --> 5 % 3 == 1 --> 5 % 5 ==0 --> 5  1 done  
//Prime divisor of n always <= sqrt(n) 
//Traverse from 2 --> sqrt(n)

//O(logN)
void primeDivisor(int n){
    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0){
            while(n % i == 0){
                printf("%d\n", i);
                n /= i;
            }
        }
    }
    // Done prime divisor 
    if(n != 1) printf("%d\n", n);
}

int main (){
    int n;scanf("%d", &n);
    primeDivisor(n);
    return 0;
}