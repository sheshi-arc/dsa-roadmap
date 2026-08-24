#include <iostream>

int main() {
    // Initialize array and size
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum = 0;

    // Accumulate the sum of all elements
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}