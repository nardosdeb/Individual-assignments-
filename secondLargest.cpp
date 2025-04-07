#include <iostream>
 using namespace std;
 
 int findSecondLargest(int arr[], int size) {
     int largest = arr[0];  
     int secondLargest = -1; 
     for (int i = 1; i < size; i++) {
         if (arr[i] > largest) {
             secondLargest = largest; 
             largest = arr[i];
         } else if (arr[i] > secondLargest && arr[i] < largest) {
             secondLargest = arr[i];
         }
     }
     return secondLargest;
 }
 int main() {
     int arr[] = {6, 4, 3, 8, 2, 66, 9, 1}; 
     int size = sizeof(arr) / sizeof(arr[0]); 
     int secondLargest = findSecondLargest(arr, size);
     if (secondLargest == -1) {
         cout << "No second largest element exists." << endl;
     } else {
         cout << "The Second Largest number in the array is: " << secondLargest << endl;
     }
     return 0;
 }