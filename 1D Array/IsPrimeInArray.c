#include<stdio.h>
#include<limits.h>
#include<math.h>

int isPrime(int n){
    if(n < 2)return 0;
    for(int i = 2;i <= sqrt(n);i++){
        if((n % i) == 0) return 0;
    }
    return 1;
}

int main(){
    int n; scanf("%d", &n);
    int a[n]; 
    for(int i = 0;i < n;i++){
        scanf("%d", &a[i]);
        if(isPrime(a[i])) printf("%d\n", a[i]);
    }


    return 0;
}