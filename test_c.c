#include <stdio.h>
#include <stdlib.h>

int findAverage(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i <= size; i++) {   
        sum += arr[i];
    }

    return sum / size;
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    int avg = findAverage(numbers, 5);

    printf("Average = %d\n", avg);

    free(numbers);   

    return 0;
}