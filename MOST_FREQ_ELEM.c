#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 5, 3, 2, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0, mostFrequent = arr[0];

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    printf("Most frequent element is %d (appeared %d times)\n", mostFrequent, maxCount);
    return 0;
}
