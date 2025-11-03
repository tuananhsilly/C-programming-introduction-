// On^2
// How: Through each step, try to push the min/max element to the head of the array
//  3 1 8 2 0 5 : n = 6, 5 steps
//  0 1 8 2 3 5
//  0 1 8 2 3 5 //  Try on the left array except 0:
// except 0 1 : 2 8 3 5
// .... so on 
#include<stdio.h>
void selectionSort(int a[], int n){
    // n-1 step
    for(int i = 0;i < n - 1;i++){
        int min_pos = i; // min_pos = the first element
        for(int j = i + 1;j < n;j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
        int tmp = a[i];
        a[i] = a[min_pos];
        a[min_pos] = tmp;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    selectionSort(a, n);
    for(int i = 0;i < n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}