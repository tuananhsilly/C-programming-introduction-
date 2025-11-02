#include<stdio.h>

int countCheckSum(int a[], int n, int k){
    int ans = 0;
    for(int i  = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(a[i] + a[j] == k) ans ++;
        }
    }
    return ans;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    printf("%d", countCheckSum(a, n, k));

    return 0;
}