#include <stdio.h>
#include <stdlib.h>
void recursive(int pos, int target, int* ans, int* check)
{
    if (pos == target){
        for (int i = 0; i < target; i++) printf("%d ", ans[i]);
        printf("\n");
        return;
    }
    for (int num = 0; num < target; num++){
        if (!check[num]){
            check[num] = 1;
            ans[pos] = num + 1;
            recursive(pos + 1, target, ans, check);
            check[num] = 0;
            ans[pos] = 0;
        }
    }
}

int main()
{
    int n;
    int *ans, *check;
    scanf("%d", &n);
    ans = (int*)calloc(sizeof(int), n);
    check = (int*)calloc(sizeof(int), n);

    recursive(0, n, ans, check);
    free(ans);
    free(check);
    return 0;
}