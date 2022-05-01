#include <stdio.h>
#include <stdlib.h>

void eratos(int n, int k)
{
    int count = 0;
    int* arr = (int*)calloc(n + 1, sizeof(int));

    for (int i = 2; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            if (arr[j]==0){
            arr[j] = 1;
            count++;
            printf("%d\n", count);
            if (count == k) {
                arr[0] = j;
                break;
                }
            }
        }
        if (count == k) break;
    }

    printf("%d", arr[0]);
    free(arr);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    eratos(n, k);
    return 0;
}