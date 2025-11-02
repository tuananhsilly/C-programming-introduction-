#include<stdio.h>

long long Fac(int n){
    int res = 1;
    for(int i = 1;i <= n;i++){
        res *= i;
    }
    return res;
}

int main(){
    int n;scanf("%d", &n);
    printf("%d\n", Fac(n)); // Out of bound in the FAC of 16 long long: 21 
    return 0;
}