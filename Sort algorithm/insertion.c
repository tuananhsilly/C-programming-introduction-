#include<stdio.h>

// O(n2)
//  In each step will insert the curr ele to the sorted array
void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    { // Do phan tu dau tien i = 0 ko co thang nao dung truoc nen ko can phai chen
        // chen a[i] vao [0, i-1] sao cho van tao thanh doan tang dan (0 -> i - 1 da la doan tang dan r )
        int pos = i - 1; // vi tri dat a[i] vao tiem nang dau tien
        int insertionValue = a[i];
        while (pos >= 0 && insertionValue < a[pos]){
            //move a[pos] to the right to insert the value to it's pos
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos+1] = insertionValue;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    insertionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}