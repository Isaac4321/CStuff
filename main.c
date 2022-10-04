#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reverse(int *arr, int size_arr);
void randomize(int *arr, int size_arr, int times_to_rand);



int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    
    for (int i = 0; i < arr_size; i++) {
        printf("Value: %d\n", arr[i]);
    }
    return 0;
}

void reverse(int *arr, int size_arr) {
    int temp_arr[size_arr];
    
    for (int i = 0; i < size_arr; i++) {
        int j = size_arr - i;
        temp_arr[i] = arr[j - 1];
    }
    
    for (int x = 0; x < size_arr; x++) {
        arr[x] = temp_arr[x];
    }

}

void randomize(int *arr, int size_arr, int times_to_rand) {
    srand ( time(NULL) );
    int temp_arr[size_arr];

    for (int i = 0; i < times_to_rand; i++) {
        int rand_index = rand() % size_arr;
        temp_arr[i] = arr[rand_index];
    }

    for (int x = 0; x < size_arr; x++) {
        arr[x] = temp_arr[x];
    }
}