#include <stdio.h>
#include <stdlib.h>

void miniMaxSum(int arr[], int n) {
    long long total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    long long min_sum = -1; 
    long long max_sum = -1; 

    for (int i = 0; i < n; i++) {
        long long current_sum = total_sum - arr[i];

        if (min_sum == -1 || current_sum < min_sum) {
            min_sum = current_sum;
        }
        if (max_sum == -1 || current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%lld %lld\n", min_sum, max_sum);
}

int main() {
    int arr[5]; 
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    miniMaxSum(arr, 5);

    return 0;
}
