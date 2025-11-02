#include<stdio.h>

int checkExist(int a[], int n, int k){
    for (int i = 0; i < n; i++){
        if(a[i] == k) return 1;
    }
    return 0;
}


int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }

    if(checkExist(a, n, k)) printf("FOUND\n"); 
    else printf("NOT FOUND\n");
    

    return 0;
}