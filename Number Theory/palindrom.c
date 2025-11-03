#include<stdio.h>
#include<math.h>

int isPa(int n){
    int res = 0;
    int temp = n;
    while(n != 0){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == temp;
}

int main(){
    int n;scanf("%d", &n);
    if(isPa(n)) printf("Palindrom\n");
    else printf("Not\n");
    return 0;
}