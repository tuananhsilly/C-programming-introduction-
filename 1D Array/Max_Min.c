#include<stdio.h>
#include<limits.h>

int findMax(int a[], int n){
    int max = INT_MIN;
    // int min = INT_MAX;
    for(int i = 0;i < n;i++){
        if (a[i] > max) max = a[i];
        // if (a[i] < min) min = a[i];
    }
    return max;
}

int findMin(int a[], int n){
    // int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0;i < n;i++){
        // if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    return min;
}



int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    printf("%d %d\n", findMax(a, n), findMin(a, n));
    return 0;
}