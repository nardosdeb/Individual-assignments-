#include <iostream>
 using namespace std;
 
 // Swap function using pointers
 void swap(int* a, int* b) {
     int temp = *a;
     *a = *b;
     *b = temp;
 }
 
 // 1. Bubble Sort using Pointers
 void bubbleSort(int* arr, int n) {
     for (int i = 0; i < n - 1; i++) {
         for (int j = 0; j < n - i - 1; j++) {
             if (*(arr + j) > *(arr + j + 1)) {
                 swap((arr + j), (arr + j + 1));
             }
         }
     }
 }
 
 // 2. Selection Sort using Pointers
 void selectionSort(int* arr, int n) {
     for (int i = 0; i < n - 1; i++) {
         int* minPtr = (arr + i);
         for (int j = i + 1; j < n; j++) {
             if (*(arr + j) < *minPtr) {
                 minPtr = (arr + j);
             }
         }
         swap((arr + i), minPtr);
     }
 }
 
 // 3. Quick Sort using Pointers
 int* partition(int* low, int* high) {
     int pivot = *high;
     int* i = low - 1;
 
     for (int* j = low; j < high; j++) {
         if (*j <= pivot) {
             i++;
             swap(i, j);
         }
     }
     swap(i + 1, high);
     return (i + 1);
 }
 
 void quickSort(int* arr, int* high) {
     if (arr < high) {
         int* pi = partition(arr, high);
         quickSort(arr, pi - 1);
         quickSort(pi + 1, high);
     }
 }
 
 // Function to print array
 void printArray(int* arr, int n) {
     for (int i = 0; i < n; i++) {
         cout << *(arr + i) << " ";
     }
     cout << endl;
 }
 
 // Main function to test the algorithms
 int main() {
     int arr1[] = {64, 34, 25, 12, 22, 11, 90};
     int arr2[] = {64, 34, 25, 12, 22, 11, 90};
     int arr3[] = {64, 34, 25, 12, 22, 11, 90};
     int n = sizeof(arr1) / sizeof(arr1[0]);
 
     cout << "Original array: ";
     printArray(arr1, n);
 
     // Bubble Sort
     bubbleSort(arr1, n);
     cout << "Bubble Sort: ";
     printArray(arr1, n);
 
     // Selection Sort
     selectionSort(arr2, n);
     cout << "Selection Sort: ";
     printArray(arr2, n);
 
     // Quick Sort
     quickSort(arr3, arr3 + n - 1);
     cout << "Quick Sort: ";
     printArray(arr3, n);
 
     return 0;
 }