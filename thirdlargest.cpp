#include <iostream>
using namespace std;

int findThirdLargest(int arr[], int size) {
    // Initialize the three largest variables
    int first = arr[0], second = INT_MIN, third = INT_MIN;

    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    return third;
}

int main() {
    int arr[] = {120, 45, 67, 89, 34, 23, 90, 11}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int thirdLargest = findThirdLargest(arr, size); // Find the third largest number
    cout << "The third largest number in the array is: " << thirdLargest << endl;

    return 0;
}