#include<stdio.h>
#include<math.h>

// Comp : O(n)
// int isPrime(int n){
//     int Divisor = 0;
//     for(int i = 1; i <=n ;i++){
//         if((n % i) == 0) Divisor++;
//     }
//     if(Divisor == 2) return 1;
//     else return 0;
// }

// int isPrime(int n){
//     if(n < 2)return 0;
//     for(long long i = 2;i <= n-1;i++){
//         if((n % i) == 0){
//             return 0;
//         }
//     }
//     return 1;
// }

// O(sqrt(n))
int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if ((n % i) == 0)
            return 0;
    }
    return 1;
}

int main(){
    int n;scanf("%d", &n);
    if(isPrime(n)) printf("YES\n");
    else printf("NO\n");
    return 0;
}