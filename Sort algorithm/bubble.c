#include<stdio.h>
//O(n2)
// Each step will move the max element to the end (with increasing arrangement)
// Each step will consider the pairs of the head element and swap 

void bubbleSort(int a[], int n){
    for(int i = 0;i < n - 1;i++){ // traverse from head to end 
        for(int j = 0;j < n - i - 1;j++){ // except the ith last element 
            if(a[j] > a[j+1]){ // compare the couple of elements that is next to each other 
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}