#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

char *twoArrays(int a[], int b[], int k, int n) {
    qsort(a, n, sizeof(int), compare_ints);
    qsort(b, n, sizeof(int), compare_ints);

    for (int i = 0; i < n; i++) {
        if (a[i] + b[n - 1 - i] < k) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

        char *result = twoArrays(a, b, k, n);
        printf("%s\n", result);
    }

    return 0;
}
