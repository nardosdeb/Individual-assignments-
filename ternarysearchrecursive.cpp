#include <iostream>
using namespace std;
int ternarySearchRecursive(int arr[], int low, int high) {
    if (high - low <= 2) { 
        int maxVal = arr[low];
        for (int i = low + 1; i <= high; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }

    int mid1 = low + (high - low) / 3; 
    int mid2 = high - (high - low) / 3; 

    if (arr[mid1] < arr[mid2]) {
        return ternarySearchRecursive(arr, mid1, high); 
    } else {
        return ternarySearchRecursive(arr, low, mid2); 
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 10, 8, 6, 4, 2}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum value in the array: " << ternarySearchRecursive(arr, 0, size - 1) << endl;

    return 0;
}