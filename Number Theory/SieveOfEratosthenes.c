#include<stdio.h>
#include<math.h>

//lke/dem cac so ngto tu 1-n (n <= 1e7)
//O(nloglogn)
// Can 1 mang danh dau a[n+1
//prime[i] : 1 ? 0
//B1: Assume all the num is prime for 0 - n: prime[i] = 1
//B2: All the multiple of the prime num is not prime 

int n = 1e7; // the num that you wanna sieve to 
int prime[10000007+1];

void sieve(){
    for(int i = 0;i <= n;i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2;i <= sqrt(n);i++){
        if(prime[i] == 1){
            for(int j =  i * i;j <= n;j += i){
                prime[j] = 0;
            }
        }
    }
}

int main(){
    sieve();
    for(int i = 0;i <= 100;i++){
        if(prime[i] == 1) printf("%d\n", i);
    }
    return 0;
}