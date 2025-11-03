#include<stdio.h>
#include<math.h>

//normal 
int checkFibo(long long n){
    long long f1 = 0, f2 = 1;
    if(n == f1 || n == f2) return 1;
    for(int i = 2;i <= 92; i++){
        long long fn = f1 + f2;
        if( fn == n) return 1;
        f1 = f2;
        f2 = fn;
    }
    return 0;
}

//using recursion
int fibo(int n){
    if(n == 1) return 0;
    if (n == 2) return 1;
    else return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;scanf("%d", &n);
    if(checkFibo(n)) printf("Is fibo\n");
    else printf("Not fibo\n");
    return 0;
}