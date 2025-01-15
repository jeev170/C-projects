#include <stdio.h>

float calculateAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

int main() {
    int marks[] = {85, 90, 78, 88, 76};
    int n = sizeof(marks) / sizeof(marks[0]);

    float average = calculateAverage(marks, n);
    printf("Average marks = %.2f\n", average);

    return 0;
}
