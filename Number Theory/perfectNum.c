/// Perfect num is the num that contains the actual divisors except it-self and the sum of them equal to the num 

#include<stdio.h>
#include<math.h>

int isPerfect(long long n){
    int sum = 0;
    for(int i = 1;i <= sqrt(n);i++){
        if((n % i) == 0){
            sum += i;
            if(i != n/i)
                sum += n/i;
        }
    }
    if(sum - n == n) return 1;
    else return 0;
}

int main(){
    int n;scanf("%d", &n);
    if(isPerfect(n)) printf("Perfect\n");
    else printf("NOT PERFECT\n");
    return 0;
}