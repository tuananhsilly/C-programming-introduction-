#include<stdio.h>
#include<math.h>

//a^b: Luy thua nhi phan 
//normal way: 
// int binEx(int a, int b){
//     int res = 1;
//     for(int i = 1;i <= b;i++){
//         res *= a;
//     }
//     return res;
// }

// world way logB
int binEx(int a, int b){
    int res = 1;
    while(b != 0){
        if(b % 2 == 1){ // b is odd
            res *= a; // a ^ 2 ^ 0
            // nham chuyen dich cac co so 
        }
        a *= a;
        b /= 2; // bin 
    }
    return res;
}

int main(){
    int a, b; scanf("%d %d", &a, &b);
    printf("%d\n", binEx(a, b));
    return 0;
}