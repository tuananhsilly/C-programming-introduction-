#include<stdio.h>
#include<math.h>

//O(logN)
int countDiv(int n){
    int sum = 0;
    for(int i = 1;i <= sqrt(n);i++){
        if((n%i) == 0){
            sum++;
            if(i != n/i)
            sum++;
        }
    }
    return sum;
}

int main(){
    int n;scanf("%d", &n);
    printf("%d\n", countDiv(n));

    return 0;
}